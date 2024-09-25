#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerMachineRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_machine_registration_entry_property_index_t : uint32_t
    {                                                                       
        exe_path =                     0x0,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        command_line =                 0x1,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        identity_type =                0x2,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permissions =                  0x3,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatable_classes =          0x4,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_type =                  0x5,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_id =                       0x6,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        identity =                     0x7,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_name =                 0x8,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //custom_attributes =          0x9,                                   // Windows 10 v1607
        explicit_psm_activation_type = 0x9,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attributes =            0xa,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =             0xa,                                   // Windows 10 v1607
        num_properties =               0xb,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                      
};
