#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kdpc_t;   }
namespace nt { struct ktimer_t; }

#include "magic/ksclock_dispatch_t.start.hpp"
namespace ndis
{
    struct kspin_t;
    struct ksresolution_t;

    // [struct _KSCLOCK_DISPATCH]
    // => Windows 10 v1607
    //
    struct ksclock_dispatch_t                   
    {                                           
        using set_timer_t =       sdk::function<uint8_t(struct ndis::kspin_t*, struct nt::ktimer_t*, int64_t, struct nt::kdpc_t*)>*;                
        using cancel_timer_t =    sdk::function<uint8_t(struct ndis::kspin_t*, struct nt::ktimer_t*)>*;                
        using correlated_time_t = sdk::function<int64_t(struct ndis::kspin_t*, int64_t*)>*;                
        using resolution_t =      sdk::function<void(struct ndis::kspin_t*, struct ndis::ksresolution_t*)>*;                
                                                
        // Windows 10 v1607                     
        //                                      
        _m00 set_timer_t        set_timer;        //{ +0x0000    } | .SetTimer
        _m01 cancel_timer_t     cancel_timer;     //{ +0x0008    } | .CancelTimer
        _m02 correlated_time_t  correlated_time;  //{ +0x0010    } | .CorrelatedTime
        _m03 resolution_t       resolution;       //{ +0x0018    } | .Resolution
                                                
        SDK_MAGIC_PROPERTIES( "_KSCLOCK_DISPATCH.$", 0x0, false, 0x1f938bc33226fe84 );                
        SDK_FIXED_SIZE( ksclock_dispatch_t, 0x20 );                
    };                                          
};
#include "magic/ksclock_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ksclock_dispatch_t, 0x20 );
