#pragma once

#include <vector>
#include <string>
#include "singleton.hpp" 

namespace a1 {


class UserConfig : public Singleton<UserConfig>
{
public:
   
    void show();
    void add_user(std::string user, std::string group);

   
    friend class Singleton<UserConfig>;

private:
   

    struct GroupEntity
    {
        std::string user;
        std::string group;
    };

    std::vector<GroupEntity> m_users_groups;
    
protected:

    UserConfig() = default;
    ~UserConfig() = default;
};

} // a1
