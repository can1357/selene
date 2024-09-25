#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum COM_CALL_LOCALITY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_call_locality_t : int32_t
    {                                       
        same_process =    0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_process =   0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_container = 0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_machine =   0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
