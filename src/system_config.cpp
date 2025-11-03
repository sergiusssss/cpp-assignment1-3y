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
    int i = 1;
    for (auto &u : m_users_systems)
    {
        std::cout << i++ << ". " << u.user << " - " << u.system << "\n";
    }
}

} // namespace a1
