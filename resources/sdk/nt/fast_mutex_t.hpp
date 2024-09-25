#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

#include "magic/fast_mutex_t.start.hpp"
namespace nt
{
    // [struct _FAST_MUTEX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fast_mutex_t                     
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 int32_t             count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 void*               owner;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Owner
        _m02 uint32_t            contention;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Contention
        _m03 struct nt::kevent_t event;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Event
        _m04 uint32_t            old_irql;    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .OldIrql
                                            
        SDK_NONVOL_PROPERTIES( "_FAST_MUTEX.$", 0x38, true, 0x402006f6e6631c9a );           
        SDK_FIXED_SIZE( fast_mutex_t, 0x38 );           
    };                                      
};
#include "magic/fast_mutex_t.end.hpp"
SDK_VERIFY( struct nt::fast_mutex_t, 0x38 );
