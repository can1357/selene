#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/livedump_flags_t.start.hpp"
namespace dbgk
{
    // [union DBGK_LIVEDUMP_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union livedump_flags_t             
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint1_t  user_pages;        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .UserPages
        _m01 uint1_t  request_minidump;  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .RequestMinidump
        _m02 uint1_t  hypervisor_pages;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .HypervisorPages
        _m03 uint32_t as_ulong;          //{ +0x0000    +0x0000    +0x0000    } | .AsUlong
                                       
        // Windows 11                  
        //                             
        _m04 uint1_t  no_defer_write;    //{ +0x0000@3  } | .NoDeferWrite
                                       
        SDK_MAGIC_PROPERTIES( "DBGK_LIVEDUMP_FLAGS.$", 0x4, true, 0xcb977be4e9ba8941 );                 
        SDK_FIXED_SIZE( livedump_flags_t, 0x4 );                 
    };                                 
};
#include "magic/livedump_flags_t.end.hpp"
SDK_VERIFY( union dbgk::livedump_flags_t, 0x4 );
