#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SC_EVENT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sc_event_type_t : int32_t
    {                                   
        database_change = 0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        property_change = 0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        status_change =   0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
