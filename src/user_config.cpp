#include "user_config.hpp"

#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:" << std::endl;
    int counter = 1;
    for (const auto user : m_users_groups) {
        std::cout << counter << ". " << user.user << " - " << user.group << std::endl;
        counter++;
    }
}

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups.push_back({user, group});

}

}
