#include "singleton.hpp"
#include "user_config.hpp"
#include "system_config.hpp"

#include <vector>
#include <string>
#include <map>

using namespace a1;

void fill_data()
{
    auto& users = Singleton<UserConfig>::getInstance();
    auto& systems = Singleton<SystemConfig>::getInstance();

    std::vector<std::string> names = {
        "Arsen'yev", "Bykanov", "Burba", "Burlachenko", "Dvornyk",
        "Druzhenko", "Zhukovs'ka", "Zakharenko", "Kalinichenko", "Lavrov",
        "Marchenko", "Merkova", "Nazarenko", "Palamarchuk", "Savin",
        "Trubchaninov", "Cherkasov", "Chumak", "Shvets'"
    };

    std::map<std::string, std::string> os = {
        {"Arsen'yev", "Linux"}, {"Bykanov", "MacOS"}, {"Burba", "Windows"},
        {"Burlachenko", "Linux"}, {"Dvornyk", "MacOS"}, {"Druzhenko", "Linux"},
        {"Zhukovs'ka", "Windows"}, {"Zakharenko", "Linux"}, {"Kalinichenko", "MacOS"},
        {"Lavrov", "Linux"}, {"Marchenko", "Windows"}, {"Merkova", "Windows"},
        {"Nazarenko", "Windows"}, {"Palamarchuk", "Windows"}, {"Savin", "Windows"},
        {"Trubchaninov", "Linux"}, {"Cherkasov", "Windows"}, {"Chumak", "MacOS"},
        {"Shvets'", "MacOS"}
    };

    std::string me = "Burba";
    size_t index = 0;
    for (size_t i = 0; i < names.size(); ++i)
        if (names[i] == me)
            index = i;

    size_t prev = (index + names.size() - 1) % names.size();
    size_t next = (index + 1) % names.size();

    users.add_user(names[prev], "Z-31");
    users.add_user(names[index], "Z-31");
    users.add_user(names[next], "Z-31");

    systems.add_system(names[prev], os[names[prev]]);
    systems.add_system(names[index], os[names[index]]);
    systems.add_system(names[next], os[names[next]]);
}
