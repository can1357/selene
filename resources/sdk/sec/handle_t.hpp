#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_t.start.hpp"
namespace sec
{
    // [struct _SecHandle]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct handle_t            
    {                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint64_t dw_lower;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLower
        _m01 uint64_t dw_upper;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwUpper
                               
        SDK_NONVOL_PROPERTIES( "_SecHandle.$", 0x10, true, 0x5a1bf25556a29444 );         
        SDK_FIXED_SIZE( handle_t, 0x10 );         
    };                         
};
#include "magic/handle_t.end.hpp"
SDK_VERIFY( struct sec::handle_t, 0x10 );
