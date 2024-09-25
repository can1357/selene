#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/whea128a_t.start.hpp"
namespace wdf
{
    // [struct _WHEA128A]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct whea128a_t      
    {                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint64_t low;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Low
        _m01 int64_t  high;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .High
                           
        SDK_NONVOL_PROPERTIES( "_WHEA128A.$", 0x10, true, 0x5f402c778246e35b );     
        SDK_FIXED_SIZE( whea128a_t, 0x10 );     
    };                     
};
#include "magic/whea128a_t.end.hpp"
SDK_VERIFY( struct wdf::whea128a_t, 0x10 );
