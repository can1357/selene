#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wsle_t.start.hpp"
namespace mi
{
    // [struct _MI_WSLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wsle_t                
    {                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint4_t age;          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Age
        _m01 uint3_t protection;   //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .Protection
        _m02 uint8_t entire_wsle;  //{ +0x0000    +0x0000    +0x0000    } | .EntireWsle
                                 
        SDK_MAGIC_PROPERTIES( "_MI_WSLE.$", 0x1, true, 0xcadd616d55a12cbe );            
        SDK_FIXED_SIZE( wsle_t, 0x1 );            
    };                           
};
#include "magic/wsle_t.end.hpp"
SDK_VERIFY( struct mi::wsle_t, 0x1 );
