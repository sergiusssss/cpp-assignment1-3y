#include "user_config.hpp"

#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:" << std::endl;
    std::size_t counter = 1;
    for (const auto& item : m_users_groups) {
        std::cout << counter << ". " << item.first << " - " << item.second << std::endl;
    }
}

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups[user] = group;
}

} // a1