#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComCallMarshalingDirection]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_call_marshaling_direction_t : int32_t
    {                                                   
        com_call_marshaling_in =  0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_call_marshaling_out = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_a_com_call =          0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
