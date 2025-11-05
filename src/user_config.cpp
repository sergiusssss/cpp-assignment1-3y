#include "user_config.hpp"
#include <iostream>
#include <iomanip>

namespace a1 {

void UserConfig::add_user(std::string user, std::string group) {
   
    m_users_groups.push_back({std::move(user), std::move(group)});
}

void UserConfig::show() {
    std::cout << "User configs:" << std::endl;
    int counter = 1;

    
    for (const auto& entity : m_users_groups) {
        std::cout << counter++ << ". " 
                  << entity.user << " - " 
                  << entity.group << std::endl;
    }
}

} // a1