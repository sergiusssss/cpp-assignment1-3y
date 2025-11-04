#include "user_config.hpp"
#include <iostream>

namespace a1 {

void UserConfig::show()
{
    std::cout << "User configs:\n";
    for (std::size_t i = 0; i < m_users_groups.size(); ++i) // changed int -> std::size_t
    {
        std::cout << i + 1 << ". " << m_users_groups[i].user << " - " << m_users_groups[i].group << "\n";
    }
    /* EXPECTED OUTPUT:
     *    
     * User configs:
     * 1. Pustovit - Z-22
     * 2. Soroka - K-41
     * 3. Kuliak - Z-21
     *
     */
}

void UserConfig::add_user(std::string user, std::string group)
{
    std::size_t index = m_users_groups.size() + 1; 
    m_users_groups.push_back({user, group});
}

} // a1
