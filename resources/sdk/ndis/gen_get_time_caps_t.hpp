#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gen_get_time_caps_t.start.hpp"
namespace ndis
{
    // [struct _GEN_GET_TIME_CAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gen_get_time_caps_t        
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t flags;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t clock_precision;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ClockPrecision
                                      
        SDK_MAGIC_PROPERTIES( "_GEN_GET_TIME_CAPS.$", 0x8, true, 0xd3ea0d63db2e31d2 );                
        SDK_FIXED_SIZE( gen_get_time_caps_t, 0x8 );                
    };                                
};
#include "magic/gen_get_time_caps_t.end.hpp"
SDK_VERIFY( struct ndis::gen_get_time_caps_t, 0x8 );
