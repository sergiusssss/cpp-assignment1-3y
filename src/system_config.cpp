#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:" << std::endl;
    int i = 1;
    for (auto& s : m_users_systems)
    {
        std::cout << i++ << ". " << s.user << " - " << s.system << std::endl;
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    SystemEntity e;
    e.user = user;
    e.system = system;
    m_users_systems.push_back(e);
}

}
