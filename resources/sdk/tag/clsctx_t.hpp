#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCLSCTX]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class clsctx_t : int32_t              
    {                                          
        inproc_server =          0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc_handler =         0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        local_server =           0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc_server16 =        0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remote_server =          0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc_handler16 =       0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =              0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =              0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved3 =              0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved4 =              0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_code_download =       0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved5 =              0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_custom_marshal =      0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_code_download =   0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_failure_log =         0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_aaa =            0x8000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_aaa =             0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        from_default_context =   0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_32_bit_server = 0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_x86_server =    0x40000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_64_bit_server = 0x80000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_cloaking =        0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        appcontainer =           0x400000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_aaa_as_iu =     0x800000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved6 =              0x1000000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate_arm32_server =  0x2000000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ps_dll =                 0x80000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
