#include "user_config.hpp"

#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:" << std::endl;
    for (int i = 0; i < m_users_groups.size(); i++) {
        std::cout << i+1 << ". " << m_users_groups[i].user << " - " << m_users_groups[i].group << std::endl;
    }
}

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups.push_back({user, group});
}

} // a1