#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MEMORY_WORKING_SET_EX_LOCATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_working_set_ex_location_t : int32_t
    {                                                    
        invalid =  0x0,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resident = 0x1,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pagefile = 0x2,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved = 0x3,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
