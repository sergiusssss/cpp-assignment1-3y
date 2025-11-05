#include "system_config.hpp"
#include <iostream>

namespace a1 {

void SystemConfig::show()
{
    std::cout << "System configs:\n";
    for (size_t i = 0; i < m_users_groups.size(); ++i)
    {
        std::cout << i + 1 << ". " 
                  << m_users_groups[i].user 
                  << " - " 
                  << m_users_groups[i].system 
                  << "\n";
    }
}

void SystemConfig::add_system(std::string user, std::string system)
{
    m_users_groups.push_back({std::move(user), std::move(system)});
}

} // namespace a1
