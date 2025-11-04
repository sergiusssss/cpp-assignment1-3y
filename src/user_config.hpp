#pragma once

#include <vector>
#include <string>

namespace a1 {

template <typename T> class Singleton; 

class UserConfig
{
    friend class Singleton<UserConfig>; 

public:
    void show();

    void add_user(std::string user, std::string group);
private:
    UserConfig() = default;
    ~UserConfig() = default;

    struct GroupEntity
    {
        std::string user;
        std::string group;
    };

    std::vector<GroupEntity> m_users_groups;
};

} // a1