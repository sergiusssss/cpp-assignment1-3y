#pragma once

#include <map>
#include <string>

namespace a1 {

class UserConfig
{
public:
    UserConfig() = default;
    ~UserConfig() = default;

    void show(); // IMPLEMENT

    void add_user(std::string user, std::string group); // IMPLEMENT
private:
    std::map<std::string, std::string> m_users_groups;
};

} // a1
