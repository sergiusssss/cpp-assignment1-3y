#include <singleton.hpp>
#include <user_config.hpp>
#include <system_config.hpp>

#include <vector>
#include <string>
#include <utility>

namespace a1 {

void fill_data_impl()
{
    
    auto& userConfig = Singleton<UserConfig>::getInstance();
    auto& systemConfig = Singleton<SystemConfig>::getInstance();

    
    const std::vector<std::pair<std::string, std::string>> userList = {
        {"Burlachenko", "Z-31"},
        {"Dvornyk", "Z-31"},
        {"Druzhenko", "Z-31"}
    };

    const std::vector<std::pair<std::string, std::string>> systemList = {
        {"Burlachenko", "Linux"},
        {"Dvornyk", "MacOS"},
        {"Druzhenko", "Linux"}
    };

    
    for (const auto& [name, group] : userList)
        userConfig.add_user(name, group);

    for (const auto& [name, os] : systemList)
        systemConfig.add_system(name, os);
}

} 


void fill_data()
{
    a1::fill_data_impl();
}