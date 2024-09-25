#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum VSAStandardParameter]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vsa_standard_parameter_t : int32_t
    {                                            
        source_machine =    0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_process =    0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_thread =     0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_component =  0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_session =    0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_machine =    0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_process =    0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_thread =     0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_component =  0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_session =    0x9,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_identity = 0xa,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        causality_id =      0xb,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_default =        0x4000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_handle =     0x4000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_handle =     0x4001,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        arguments =         0x4002,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        return_value =      0x4003,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exception =         0x4004,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        correlation_id =    0x4005,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
