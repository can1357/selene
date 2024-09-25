#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/db_header_t.start.hpp"
namespace win
{
    // [struct _DB_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct db_header_t                 
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t dw_major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMajorVersion
        _m01 uint32_t dw_minor_version;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMinorVersion
        _m02 uint32_t dw_magic;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMagic
                                       
        SDK_MAGIC_PROPERTIES( "_DB_HEADER.$", 0xc, true, 0x152841277e4d3489 );                 
        SDK_FIXED_SIZE( db_header_t, 0xc );                 
    };                                 
};
#include "magic/db_header_t.end.hpp"
SDK_VERIFY( struct win::db_header_t, 0xc );
