#include <singleton.hpp>
#include <user_config.hpp>
#include <system_config.hpp>

#include <vector>
#include <string>

using namespace a1;

void fill_data()
{
    auto &users = Singleton<UserConfig>::getInstance();
    auto &systems = Singleton<SystemConfig>::getInstance();

    std::vector<std::string> names = {
        "Arsen'yev", "Bykanov", "Burba", "Burlachenko", "Dvornyk",
        "Druzhenko", "Zhukovs'ka", "Zakharenko", "Kalinichenko",
        "Lavrov", "Marchenko", "Merkova", "Nazarenko", "Palamarchuk",
        "Savin", "Trubchaninov", "Cherkasov", "Chumak", "Shvets'"
    };

    std::vector<std::string> systems_list = {
        "Linux", "MacOS", "Windows", "Linux", "MacOS",
        "Linux", "Windows", "Linux", "MacOS",
        "Linux", "Windows", "Windows", "Windows", "Windows",
        "Windows", "Linux", "Windows", "MacOS", "MacOS"
    };

    const std::string prev = "Dvornyk";
    const std::string self = "Druzhenko";
    const std::string next = "Zhukovs'ka";

    users.add_user(prev, "Z-31");
    users.add_user(self, "Z-31");
    users.add_user(next, "Z-31");


    systems.add_system(prev, "MacOS");
    systems.add_system(self, "Linux");
    systems.add_system(next, "Windows");
}
