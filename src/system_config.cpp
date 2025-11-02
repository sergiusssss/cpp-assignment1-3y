//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"

#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    // IMPLEMENT

    // EXPECTED OUTPUT:
    /*
     * System configs:
     * 1. Pustovit - MacOS
     * 2. Soroka - Windows
     * 3. Kuliak - Linux
     */
    std::cout << std::endl << "System configs:" << std::endl;
    std::size_t counter = 0;
    for (const auto& item : m_users_systems) {
        std::cout << counter << ". " << item.user << " - " << item.system << std::endl;
        counter++;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({user, system});
}

}