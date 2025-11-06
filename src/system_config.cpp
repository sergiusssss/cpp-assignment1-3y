//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({user, system});
}

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    int index = 1;
    for (const auto& s : m_users_systems) {
        std::cout << index++ << ". " << s.user << " - " << s.system << "\n";
    }
}

} // namespace a1
