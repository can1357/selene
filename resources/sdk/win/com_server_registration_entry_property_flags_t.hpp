#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComServerRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_server_registration_entry_property_flags_t : uint64_t
    {                                                                   
        none =                             0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_id =                   0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_display_name =         0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =                     0x4,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        launch_and_activation_permission = 0x8,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        executable =                       0x10,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //arguments =                      0x20,                          // Windows 10 v1607
        is_system_executable =             0x20,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_surrogate_executable =      0x40,                          // Windows 10 v1607
        system_executable_architecture =   0x40,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arguments =                        0x80,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //surrogate_app_id =               0x80,                          // Windows 10 v1607
        surrogate_app_id =                 0x100,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        execution_package_family =         0x200,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_name =                     0x400,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                  
};
