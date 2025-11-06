#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    for (std::size_t i = 0; i < m_users_systems.size(); ++i) {
        std::cout << (i + 1) << ". " << m_users_systems[i].user
                  << " - " << m_users_systems[i].system << "\n";
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_systems.push_back(SystemEntity{std::move(user), std::move(system)});
}

}
