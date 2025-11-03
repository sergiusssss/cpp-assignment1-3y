#pragma once
#include <string>
#include <vector>

namespace a1 {
class UserConfig
{
  public:
    UserConfig() = default;
    ~UserConfig() = default;

    void show();
    void add_user(std::string user, std::string group);

  private:
    struct UserEntity
    {
        std::string user;
        std::string group;
    };

    std::vector<UserEntity> users_;
};
} // namespace a1
