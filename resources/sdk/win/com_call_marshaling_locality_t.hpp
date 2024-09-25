#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComCallMarshalingLocality]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_call_marshaling_locality_t : int32_t
    {                                                  
        same_process =    0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_process =   0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_container = 0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_machine =   0x3,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown_origin =  0x4,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
