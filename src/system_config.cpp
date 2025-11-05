//
// Created by Serhii Pustovit on 31.10.2025.
//

#include "system_config.hpp"
#include <iostream>
#include <utility> 

namespace a1 {

void SystemConfig::add_system(std::string user, std::string system) {
   
    m_systems_config.push_back({std::move(user), std::move(system)});
}


void SystemConfig::show() {
    std::cout << "System configs:" << std::endl;
    int counter = 1;

    
    for (const auto& entity : m_systems_config) {
        std::cout << counter++ << ". " 
                  << entity.first << " - "    
                  << entity.second << std::endl; 
    }
}

} // a1