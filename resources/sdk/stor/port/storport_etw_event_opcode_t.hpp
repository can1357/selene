#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_ETW_EVENT_OPCODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storport_etw_event_opcode_t : int32_t
    {                                               
        info =      0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start =     0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop =      0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dc_start =  0x3,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dc_stop =   0x4,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extension = 0x5,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reply =     0x6,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume =    0x7,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend =   0x8,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send =      0x9,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive =   0xf0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
