//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    for (std::size_t i = 0; i < m_users_systems.size(); ++i) // changed int -> std::size_t
    {
        std::cout << i + 1 << ". " << m_users_systems[i].user << " - " << m_users_systems[i].system << "\n";
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
    std::size_t index = m_users_systems.size() + 1; 
    m_users_systems.push_back({user, system});
}

} // a1
