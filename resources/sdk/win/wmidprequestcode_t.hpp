#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WMIDPREQUESTCODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wmidprequestcode_t : int32_t
    {                                      
        get_all_data =        0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_single_instance = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_single_instance = 0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_single_item =     0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_events =       0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_events =      0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_collection =   0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_collection =  0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reginfo =             0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        execute_method =      0x9,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_state =       0xa,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
