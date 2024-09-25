#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dssseed_t.start.hpp"
namespace win
{
    // [struct _DSSSEED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dssseed_t                         
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                counter;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .counter
        _m01 sdk::array<uint8_t, 20> seed;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .seed
                                             
        SDK_MAGIC_PROPERTIES( "_DSSSEED.$", 0x18, true, 0x37ad7d431fa2ef52 );        
        SDK_FIXED_SIZE( dssseed_t, 0x18 );        
    };                                       
};
#include "magic/dssseed_t.end.hpp"
SDK_VERIFY( struct win::dssseed_t, 0x18 );
