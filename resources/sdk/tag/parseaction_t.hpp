#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum _tagPARSEACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class parseaction_t : int32_t
    {                                 
        canonicalize =       0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        friendly =           0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_url =       0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rootdocument =       0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        document =           0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        anchor =             0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encode_is_unescape = 0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decode_is_escape =   0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        path_from_url =      0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        url_from_path =      0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mime =               0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server =             0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        schema =             0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        site =               0xe,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        domain =             0xf,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        location =           0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_domain =    0x11,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        escape =             0x12,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unescape =           0x13,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
