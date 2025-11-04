//
// Created by Serhii Pustovit on 31.10.2025.
//

#include <iostream>

#include "system_config.hpp"

namespace a1 {

void SystemConfig::show()
{
    // IMPLEMENT
    std::cout << "System configs:"<< std::endl;
    int counter = 1;
    for (auto const& sys : m_users_systems) {
        std::cout << counter << ". " << sys.user << " - " << sys.system << std::endl;
        counter++;
    }


    // EXPECTED OUTPUT:
    /*
     * System configs:
     * 1. Pustovit - MacOS
     * 2. Soroka - Windows
     * 3. Kuliak - Linux
     */
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({ user, system });
}

}