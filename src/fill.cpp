#include "user_config.hpp"
#include "system_config.hpp"
#include "singleton.hpp"



void fill_data() {
   
    a1::UserConfig& uc = a1::Singleton<a1::UserConfig>::getInstance();
    a1::SystemConfig& sc = a1::Singleton<a1::SystemConfig>::getInstance();
 
    const std::string GROUP = "Z-31";
    const std::string SYSTEM = "Windows";

    const std::string P_PREV = "Marchenko";
    const std::string P_SELF = "Merkova";
    const std::string P_NEXT = "Nazarenko";

    uc.add_user(P_PREV, GROUP);
    uc.add_user(P_SELF, GROUP);
    uc.add_user(P_NEXT, GROUP);


    sc.add_system(P_PREV, SYSTEM);
    sc.add_system(P_SELF, SYSTEM);
    sc.add_system(P_NEXT, SYSTEM);
}
