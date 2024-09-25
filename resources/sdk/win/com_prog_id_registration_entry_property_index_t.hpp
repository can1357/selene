#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComProgIdRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_prog_id_registration_entry_property_index_t : uint32_t
    {                                                                    
        clsid =             0x0,                                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        current_version =   0x1,                                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_machine_scope = 0x2,                                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =  0x2,                                           // Windows 10 v1607
        num_properties =    0x3,                                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                   
};
