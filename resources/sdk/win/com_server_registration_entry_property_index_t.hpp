#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComServerRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_server_registration_entry_property_index_t : uint32_t
    {                                                                   
        application_id =                   0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_display_name =         0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =                     0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        launch_and_activation_permission = 0x3,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        executable =                       0x4,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //arguments =                      0x5,                           // Windows 10 v1607
        is_system_executable =             0x5,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_surrogate_executable =      0x6,                           // Windows 10 v1607
        system_executable_architecture =   0x6,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arguments =                        0x7,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //surrogate_app_id =               0x7,                           // Windows 10 v1607
        //num_properties =                 0x8,                           // Windows 10 v1607
        surrogate_app_id =                 0x8,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        execution_package_family =         0x9,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_name =                     0xa,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties =                   0xb,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                  
};
