#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xtime_t.start.hpp"
namespace win
{
    // [struct xtime]
    // => Windows 11
    //
    struct xtime_t        
    {                     
        // Windows 11     
        //                
        _m00 int64_t sec;   //{ +0x0000    } | .sec
        _m01 int32_t nsec;  //{ +0x0008    } | .nsec
                          
        SDK_MAGIC_PROPERTIES( "xtime.$", 0x0, false, 0xe769407f1a99e853 );     
        SDK_FIXED_SIZE( xtime_t, 0x10 );     
    };                    
};
#include "magic/xtime_t.end.hpp"
SDK_VERIFY( struct win::xtime_t, 0x10 );
