#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

namespace a1 {
    void fill_data()
    {
        auto& userCfg = Singleton<UserConfig>::getInstance();
        auto& sysCfg = Singleton<SystemConfig>::getInstance();

        std::vector<std::pair<std::string, std::string>> users = {
            {"Marchenko", "Z-31"},
            {"Dvornyk", "Z-31"},
            {"Nazarenko", "Z-31"}
        };

        std::vector<std::pair<std::string, std::string>> systems = {
            {"Marchenko", "Windows"},
            {"Dvornyk", "MacOS"},
            {"Nazarenko", "Windows"}
        };

        for (auto& u : users)
            userCfg.add_user(u.first, u.second);

        for (auto& s : systems)
            sysCfg.add_system(s.first, s.second);
    }
}