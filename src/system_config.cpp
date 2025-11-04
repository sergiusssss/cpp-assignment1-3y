//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"

#include <iostream>
#include <ostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:" <<  std::endl;
    int counter = 1;
    for (const auto user: m_users_systems) {
        std::cout << counter << ". " << user.user << " - " << user.system << std::endl;
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
    m_users_systems.push_back({user, system});
}

}