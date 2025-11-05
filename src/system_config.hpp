#pragma once

#include <vector>
#include <string>
#include <utility> 
#include "singleton.hpp" 

namespace a1 {


class SystemConfig : public Singleton<SystemConfig>
{
public:
   
    void show();
    void add_system(std::string user, std::string system);

   
    friend class Singleton<SystemConfig>;

private:
    
    using ConfigEntity = std::pair<std::string, std::string>; 

    
    std::vector<ConfigEntity> m_systems_config;
    
protected:
    
    SystemConfig() = default;
    ~SystemConfig() = default;
};

} // a1