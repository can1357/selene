#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ActivatableClassMachineRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activatable_class_machine_registration_entry_property_index_t : uint32_t
    {                                                                                  
        activation_type =                            0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        clsid =                                      0x0,                                // Windows 10 v1607
        //activation_type =                          0x1,                                // Windows 10 v1607
        server =                                     0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                                   0x2,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //server =                                   0x2,                                // Windows 10 v1607
        //dll_path =                                 0x3,                                // Windows 10 v1607
        threading =                                  0x3,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //threading =                                0x4,                                // Windows 10 v1607
        trust_level =                                0x4,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attributes =                          0x5,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //trust_level =                              0x5,                                // Windows 10 v1607
        //custom_attributes =                        0x6,                                // Windows 10 v1607
        remote_server =                              0x6,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_as_user =                           0x7,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //remote_server =                            0x7,                                // Windows 10 v1607
        //activate_as_user =                         0x8,                                // Windows 10 v1607
        activate_in_shared_broker =                  0x8,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_in_broker_for_medium_il_container = 0x9,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =                           0x9,                                // Windows 10 v1607
        permissions =                                0xa,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_on_host_flags =                     0xb,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties =                             0xc,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                                 
};
