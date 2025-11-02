#include <singleton.hpp>

#include <user_config.hpp>
#include <system_config.hpp>

void fill_data()
{
    // IMPLEMENT: FILL DATA HERE
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();

    uc.add_user("Karpenko", "Z-32");
    uc.add_user("Kuz'menko", "Z-32");
    uc.add_user("Kul'omin", "Z-32");

    sc.add_system("Karpenko", "Windows");
    sc.add_system("Kuz'menko", "MacOS");
    sc.add_system("Kul'omin", "Linux");
}
