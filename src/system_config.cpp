//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"

#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:" << std::endl;
    std::size_t counter = 1;
    for (const auto& item : m_users_systems) {
        std::cout << counter << ". " << item.first << " - " << item.second << std::endl;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems[user] = system;
}

}