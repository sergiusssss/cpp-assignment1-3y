#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

using a1::Singleton;
using a1::UserConfig;
using a1::SystemConfig;

void fill_data()
{

    UserConfig& user_conf = Singleton<UserConfig>::getInstance();
    SystemConfig& system_conf = Singleton<SystemConfig>::getInstance();

    // 1. Додаємо попередню людину (Рєпін)
    user_conf.add_user("Ryepin", "Z-32");
    system_conf.add_system("Ryepin", "Windows");

    // 2. Додаємо себе (Тонкова)
    user_conf.add_user("Tonkova", "Z-32");
    system_conf.add_system("Tonkova", "MacOS");

    // 3. Додаємо наступну людину (Чабан)
    user_conf.add_user("Chaban", "Z-32");
    system_conf.add_system("Chaban", "Linux");
}