#include <user_config.hpp>
#include <system_config.hpp>

void fill_data() {
    auto& uc = a1:: Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1:: Singleton<a1:: SystemConfig>::getInstance();

    uc.add_user("Savin", "Z-31");
    uc.add_user("Trubchaninov", "Z-31");
    uc.add_user(" Cherkasov", "Z-31");
    sc.add_system("Savin", "Windows");
    sc.add_system("Trubchaninov", "Linux");
    sc.add_system("Cherkasov", "MacOS");
}//