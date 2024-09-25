#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ActivatableClassRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activatable_class_registration_entry_property_index_t : uint32_t
    {                                                                          
        activation_type =          0x0,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        clsid =                    0x0,                                          // Windows 10 v1607
        //activation_type =        0x1,                                          // Windows 10 v1607
        server =                   0x1,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                 0x2,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //server =                 0x2,                                          // Windows 10 v1607
        //dll_path =               0x3,                                          // Windows 10 v1607
        is_package_relative_path = 0x3,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        threading =                0x4,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attributes =        0x5,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =         0x6,                                          // Windows 10 v1607
        _private =                 0x6,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties =           0x7,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                         
};
