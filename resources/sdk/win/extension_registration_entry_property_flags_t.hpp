#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ExtensionRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extension_registration_entry_property_flags_t : uint64_t
    {                                                                  
        none =              0x0,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vendor =            0x1,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        icon =              0x2,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =      0x4,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        description =       0x8,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_properties = 0x10,                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                 
};
