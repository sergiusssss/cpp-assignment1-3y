//
// Created by Serhii Pustovit on 31.10.2025.
//
#include <iostream>
#include "system_config.hpp"

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    int i = 1;
    for (const auto& s : m_users_systems)
    {
        std::cout << i++ << ". " << s.user << " - " << s.system << "\n";
    }
    std::cout << std::endl;
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({user, system});
}

}
