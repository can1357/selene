#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ActivatableClassRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activatable_class_registration_entry_property_flags_t : uint64_t
    {                                                                          
        none =                     0x0,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_type =          0x1,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        clsid =                    0x1,                                          // Windows 10 v1607
        //activation_type =        0x2,                                          // Windows 10 v1607
        server =                   0x2,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                 0x4,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //server =                 0x4,                                          // Windows 10 v1607
        //dll_path =               0x8,                                          // Windows 10 v1607
        is_package_relative_path = 0x8,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        threading =                0x10,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attributes =        0x20,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _private =                 0x40,                                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                         
};
