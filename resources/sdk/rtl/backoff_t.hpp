#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/backoff_t.start.hpp"
namespace rtl
{
    // [struct _RTL_BACKOFF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct backoff_t        
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t delay;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Delay
                            
        SDK_MAGIC_PROPERTIES( "_RTL_BACKOFF.$", 0x4, true, 0x29d48b38364392de );      
        SDK_FIXED_SIZE( backoff_t, 0x4 );      
    };                      
};
#include "magic/backoff_t.end.hpp"
SDK_VERIFY( struct rtl::backoff_t, 0x4 );
