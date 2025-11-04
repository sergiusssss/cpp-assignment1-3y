#include "singleton.hpp"
#include "user_config.hpp"
#include "system_config.hpp"

int main() {
    auto& uc = a1::Singleton<a1::UserConfig>::getInstance();
    auto& sc = a1::Singleton<a1::SystemConfig>::getInstance();


    uc.show();
    sc.show();

    return 0;
}  
