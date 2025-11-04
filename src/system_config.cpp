#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    int i = 1;
    for (const auto &e : m_users_systems) {
        std::cout << i++ << ". " << e.user << " - " << e.system << std::endl;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({std::move(user), std::move(system)});
}

} 
