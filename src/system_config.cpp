//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"

#include <iostream>
#include <ostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:" << std::endl;
    int numb = 1;
    for (const auto user: m_users_systems) {
        std::cout << numb << ". " << user.user << " - " << user.system << std::endl;
        numb++;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({ user, system });
}

}