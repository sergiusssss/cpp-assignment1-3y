#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();

    uc.add_user("Shukajlo", "Z-32");
    sc.add_system("Shukajlo", "Windows");

    uc.add_user("Shumko","Z-32");
    sc.add_system("Shumko", "Windows");

    uc.add_user("Al'terovych","Z-32");
    sc.add_system("Al'terovych", "MacOS");

}
