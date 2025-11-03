#include "system_config.hpp"

#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:" << std::endl;
    for (int i = 0; i < m_users_systems.size(); i++) {
        std::cout << i+1 << ". " << m_users_systems[i].user << " - " << m_users_systems[i].system << std::endl;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back({user, system});
}

}