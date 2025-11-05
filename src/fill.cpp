#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>
#include <vector>
#include <string>

namespace a1 {

void fill_data_impl()
{
    auto& userCfg = Singleton<UserConfig>::getInstance();
    auto& sysCfg = Singleton<SystemConfig>::getInstance();

    std::vector<std::pair<std::string, std::string>> users = {
        {"Lavrov", "Z-31"},
        {"Marchenko", "Z-31"},
        {"Merkova", "Z-31"}
    };

    std::vector<std::pair<std::string, std::string>> systems = {
        {"Lavrov", "Linux"},
        {"Marchenko", "Windows"},
        {"Merkova", "Windows"}
    };

    for (auto& u : users)
        userCfg.add_user(u.first, u.second);

    for (auto& s : systems)
        sysCfg.add_system(s.first, s.second);
}

}

void fill_data()
{
    a1::fill_data_impl();
}
