#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfinterrupt_t; }

#include "magic/interrupt_sync_parameters_t.start.hpp"
namespace fx
{
    class interrupt_t;

    // [struct FxInterruptSyncParameters]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_sync_parameters_t                  
    {                                                   
        using pfn_wdf_interrupt_synchronize_t = sdk::function<uint8_t(struct wdf::wdfinterrupt_t*, void*)>*;          
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                              
        _m00 class fx::interrupt_t*           interrupt;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Interrupt
        _m01 pfn_wdf_interrupt_synchronize_t  callback;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Callback
        _m02 void*                            context;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
                                                        
        SDK_MAGIC_PROPERTIES( "FxInterruptSyncParameters.$", 0x18, true, 0xcb6189b201a2a472 );          
        SDK_FIXED_SIZE( interrupt_sync_parameters_t, 0x18 );          
    };                                                  
};
#include "magic/interrupt_sync_parameters_t.end.hpp"
SDK_VERIFY( struct fx::interrupt_sync_parameters_t, 0x18 );
