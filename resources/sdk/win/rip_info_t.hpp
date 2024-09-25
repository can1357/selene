#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rip_info_t.start.hpp"
namespace win
{
    // [struct _RIP_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rip_info_t          
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dw_error;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwError
        _m01 uint32_t dw_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwType
                               
        SDK_NONVOL_PROPERTIES( "_RIP_INFO.$", 0x8, true, 0xe6636f1a30d10009 );         
        SDK_FIXED_SIZE( rip_info_t, 0x8 );         
    };                         
};
#include "magic/rip_info_t.end.hpp"
SDK_VERIFY( struct win::rip_info_t, 0x8 );
