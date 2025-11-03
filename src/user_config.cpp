#include "user_config.hpp"

#include <iostream>

namespace a1 {

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups.push_back({user, group});
}

void UserConfig::show()
{
    std::cout << "User configs:\n";
    int i = 1;
    for (auto &u : m_users_groups)
    {
        std::cout << i++ << ". " << u.user << " - " << u.group << "\n";
    }
}

} 
