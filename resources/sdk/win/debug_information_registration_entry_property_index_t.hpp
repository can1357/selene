#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DebugInformationRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class debug_information_registration_entry_property_index_t : uint32_t
    {                                                                          
        debug_path =     0x0,                                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        environment =    0x1,                                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties = 0x2,                                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                         
};
