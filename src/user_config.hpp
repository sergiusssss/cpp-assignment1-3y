#pragma once

#include <vector>
#include <string>
#include <iostream>

namespace a1 {

class UserConfig
{
public:
    void show();
    void add_user(std::string user, std::string group);

private:
    struct GroupEntity
    {
        std::string user;
        std::string group;
    };

    std::vector<GroupEntity> m_users_groups;
};

}
