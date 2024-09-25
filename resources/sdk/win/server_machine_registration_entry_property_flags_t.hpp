#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerMachineRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_machine_registration_entry_property_flags_t : uint64_t
    {                                                                       
        none =                         0x0,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_path =                     0x1,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        command_line =                 0x2,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        identity_type =                0x4,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permissions =                  0x8,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatable_classes =          0x10,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_type =                  0x20,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_id =                       0x40,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        identity =                     0x80,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_name =                 0x100,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //custom_attributes =          0x200,                                 // Windows 10 v1607
        explicit_psm_activation_type = 0x200,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attributes =            0x400,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                      
};
