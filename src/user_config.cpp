#include "user_config.hpp"
#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:\n";
    int i = 1;
    for (const auto &e : m_users_groups) {
        std::cout << i++ << ". " << e.user << " - " << e.group << std::endl;
    }
    std::cout << std::endl; 
}

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups.push_back({std::move(user), std::move(group)});
}

}
