//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"
#include <iostream>

namespace a1 {
void SystemConfig::show()
{
    // IMPLEMENT
    std::cout << "System configs:" << std::endl;

    for (int i = 0; i < m_users_systems.size(); ++i) {
        std::cout << i + 1 << ". " << m_users_systems[i].user << " - " << m_users_systems[i].system
                  << std::endl;
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
    // IMPLEMENT
    m_users_systems.push_back({ user, system });
}
} // namespace a1
