#include <singleton.hpp>
#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& user_cfg = a1::Singleton<a1::UserConfig>::getInstance();
    auto& system_cfg = a1::Singleton<a1::SystemConfig>::getInstance();

    user_cfg.add_user("Savin", "Z-31");
    user_cfg.add_user("Trubchaninov", "Z-31");
    user_cfg.add_user("Cherkasov", "Z-31");

    system_cfg.add_system("Savin", "Windows");
    system_cfg.add_system("Trubchaninov", "Linux");
    system_cfg.add_system("Cherkasov", "Windows");
}
