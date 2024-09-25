#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_registration_entry_property_flags_t : uint64_t
    {                                                               
        none =                         0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_path =                     0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        command_line =                 0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //app_user_model_id =          0x4,                           // Windows 10 v1607
        is_package_relative_path =     0x4,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_user_model_id =            0x8,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //instancing =                 0x8,                           // Windows 10 v1607
        execution_package_family =     0x10,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //identity_type =              0x10,                          // Windows 10 v1607
        instancing =                   0x20,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //permissions =                0x20,                          // Windows 10 v1607
        //activatable_classes =        0x40,                          // Windows 10 v1607
        identity_type =                0x40,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //custom_attributes =          0x80,                          // Windows 10 v1607
        permissions =                  0x80,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatable_classes =          0x100,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        explicit_psm_activation_type = 0x200,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        run_full_trust =               0x400,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxied =                      0x800,                         // Windows 10 v2004, Windows 10 v20H2
        //runtime_behavior =           0x800,                         // Windows 11
        runtime_behavior =             0x1000,                        // Windows 10 v2004, Windows 10 v20H2
        //trust_level =                0x1000,                        // Windows 11
        //host_runtime_id =            0x2000,                        // Windows 11
        trust_level =                  0x2000,                        // Windows 10 v2004, Windows 10 v20H2
        //custom_attributes =          0x4000,                        // Windows 11
        host_runtime_id =              0x4000,                        // Windows 10 v2004, Windows 10 v20H2
        custom_attributes =            0x8000,                        // Windows 10 v2004, Windows 10 v20H2
    };                                                              
};
