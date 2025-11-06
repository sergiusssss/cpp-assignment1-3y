#include "user_config.hpp"

#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:\n";
    for (std::size_t i = 0; i < m_users_groups.size(); ++i) {
        std::cout << (i + 1) << ". " << m_users_groups[i].user
                  << " - " << m_users_groups[i].group << "\n";
    }
}

void UserConfig::add_user(std::string user, std::string group)
{
    m_users_groups.push_back(GroupEntity{std::move(user), std::move(group)});
}

} // a1
