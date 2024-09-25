#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_registration_entry_property_index_t : uint32_t
    {                                                               
        exe_path =                     0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        command_line =                 0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //app_user_model_id =          0x2,                           // Windows 10 v1607
        is_package_relative_path =     0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_user_model_id =            0x3,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //instancing =                 0x3,                           // Windows 10 v1607
        execution_package_family =     0x4,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //identity_type =              0x4,                           // Windows 10 v1607
        instancing =                   0x5,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //permissions =                0x5,                           // Windows 10 v1607
        //activatable_classes =        0x6,                           // Windows 10 v1607
        identity_type =                0x6,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //custom_attributes =          0x7,                           // Windows 10 v1607
        permissions =                  0x7,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatable_classes =          0x8,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =             0x8,                           // Windows 10 v1607
        explicit_psm_activation_type = 0x9,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        run_full_trust =               0xa,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxied =                      0xb,                           // Windows 10 v2004, Windows 10 v20H2
        //runtime_behavior =           0xb,                           // Windows 11
        runtime_behavior =             0xc,                           // Windows 10 v2004, Windows 10 v20H2
        //trust_level =                0xc,                           // Windows 11
        //host_runtime_id =            0xd,                           // Windows 11
        trust_level =                  0xd,                           // Windows 10 v2004, Windows 10 v20H2
        //custom_attributes =          0xe,                           // Windows 11
        host_runtime_id =              0xe,                           // Windows 10 v2004, Windows 10 v20H2
        custom_attributes =            0xf,                           // Windows 10 v2004, Windows 10 v20H2
        //num_properties =             0xf,                           // Windows 11
        num_properties =               0x10,                          // Windows 10 v2004, Windows 10 v20H2
    };                                                              
};
