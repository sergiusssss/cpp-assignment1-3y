#include "user_config.hpp"
#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:" << std::endl;
    int i = 1;
    for (auto& g : m_users_groups)
    {
        std::cout << i++ << ". " << g.user << " - " << g.group << std::endl;
    }
}

void UserConfig::add_user(std::string user, std::string group)
{
    GroupEntity e;
    e.user = user;
    e.group = group;
    m_users_groups.push_back(e);
}

}
