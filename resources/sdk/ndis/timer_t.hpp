#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"

#include "magic/timer_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_t                     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                             
        _m00 struct nt::ktimer_t timer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Timer
        _m01 struct nt::kdpc_t   dpc;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Dpc
                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_TIMER.$", 0x80, true, 0x94d67722f517007e );      
        SDK_FIXED_SIZE( timer_t, 0x80 );      
    };                                 
};
#include "magic/timer_t.end.hpp"
SDK_VERIFY( struct ndis::timer_t, 0x80 );
