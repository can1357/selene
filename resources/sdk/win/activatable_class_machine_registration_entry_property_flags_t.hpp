#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ActivatableClassMachineRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activatable_class_machine_registration_entry_property_flags_t : uint64_t
    {                                                                                  
        none =                                       0x0,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_type =                            0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        clsid =                                      0x1,                                // Windows 10 v1607
        //activation_type =                          0x2,                                // Windows 10 v1607
        server =                                     0x2,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                                   0x4,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //server =                                   0x4,                                // Windows 10 v1607
        //dll_path =                                 0x8,                                // Windows 10 v1607
        threading =                                  0x8,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //threading =                                0x10,                               // Windows 10 v1607
        trust_level =                                0x10,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attributes =                          0x20,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //trust_level =                              0x20,                               // Windows 10 v1607
        //custom_attributes =                        0x40,                               // Windows 10 v1607
        remote_server =                              0x40,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_as_user =                           0x80,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //remote_server =                            0x80,                               // Windows 10 v1607
        //activate_as_user =                         0x100,                              // Windows 10 v1607
        activate_in_shared_broker =                  0x100,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_in_broker_for_medium_il_container = 0x200,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        permissions =                                0x400,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_on_host_flags =                     0x800,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                                 
};
