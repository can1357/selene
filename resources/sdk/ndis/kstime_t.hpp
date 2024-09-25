#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kstime_t.start.hpp"
namespace ndis
{
    // [struct KSTIME]
    // => Windows 10 v1607
    //
    struct kstime_t               
    {                             
        // Windows 10 v1607            
        //                        
        _m00 int64_t  time;         //{ +0x0000    } | .Time
        _m01 uint32_t numerator;    //{ +0x0008    } | .Numerator
        _m02 uint32_t denominator;  //{ +0x000c    } | .Denominator
                                  
        SDK_MAGIC_PROPERTIES( "KSTIME.$", 0x0, false, 0xd466b91bd1ccfb08 );            
        SDK_FIXED_SIZE( kstime_t, 0x10 );            
    };                            
};
#include "magic/kstime_t.end.hpp"
SDK_VERIFY( struct ndis::kstime_t, 0x10 );
