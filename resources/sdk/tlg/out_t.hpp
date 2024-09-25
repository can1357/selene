#pragma once
#include <sdkgen/support_library.hpp>

namespace tlg
{
    // [enum TlgOut_t]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class out_t : int32_t                 
    {                                          
        tlg_out_null =                 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_noprint =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_string =               0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_boolean =              0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_hex =                  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_pid =                  0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_tid =                  0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_port =                 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_ipv4 =                 0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_ipv6 =                 0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_socketaddress =        0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_xml =                  0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_json =                 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_win32error =           0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_ntstatus =             0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_hresult =              0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_filetime =             0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_signed =               0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_unsigned =             0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_utf8 =                 0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_pkcs7_with_type_info = 0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_code_pointer =         0x25,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //tlg_out_max =                0x25,     // Windows 10 v1607
        tlg_out_datetime_utc =         0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_max =                  0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_type_mask =            0x7f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_out_chain =                0x80,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
