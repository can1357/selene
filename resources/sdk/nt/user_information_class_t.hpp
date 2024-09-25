#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _USER_INFORMATION_CLASS]
    //  WDK 10
    //
    enum class user_information_class_t : int32_t
    {                                            
        general_information =       0x1,           // WDK 10
        preferences_information =   0x2,           // WDK 10
        logon_information =         0x3,           // WDK 10
        logon_hours_information =   0x4,           // WDK 10
        account_information =       0x5,           // WDK 10
        name_information =          0x6,           // WDK 10
        account_name_information =  0x7,           // WDK 10
        full_name_information =     0x8,           // WDK 10
        primary_group_information = 0x9,           // WDK 10
        home_information =          0xa,           // WDK 10
        script_information =        0xb,           // WDK 10
        profile_information =       0xc,           // WDK 10
        admin_comment_information = 0xd,           // WDK 10
        work_stations_information = 0xe,           // WDK 10
        set_password_information =  0xf,           // WDK 10
        control_information =       0x10,          // WDK 10
        expires_information =       0x11,          // WDK 10
        internal1_information =     0x12,          // WDK 10
        internal2_information =     0x13,          // WDK 10
        parameters_information =    0x14,          // WDK 10
        all_information =           0x15,          // WDK 10
        internal3_information =     0x16,          // WDK 10
        internal4_information =     0x17,          // WDK 10
        internal5_information =     0x18,          // WDK 10
        internal4_information_new = 0x19,          // WDK 10
        internal5_information_new = 0x1a,          // WDK 10
        internal6_information =     0x1b,          // WDK 10
        extended_information =      0x1c,          // WDK 10
        logon_ui_information =      0x1d,          // WDK 10
    };                                           
};
