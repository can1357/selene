#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notify_order_level_t.start.hpp"
namespace po
{
    // [struct _PO_NOTIFY_ORDER_LEVEL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct notify_order_level_t            
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                 
        _m00 uint32_t         device_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceCount
        _m01 uint32_t         active_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ActiveCount
        _m02 nt::list_entry_t wait_sleep;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitSleep
        _m03 nt::list_entry_t ready_sleep;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReadySleep
        _m04 nt::list_entry_t ready_s0;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReadyS0
        _m05 nt::list_entry_t wait_s0;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WaitS0
                                           
        SDK_MAGIC_PROPERTIES( "_PO_NOTIFY_ORDER_LEVEL.$", 0x48, true, 0xc477427a67e83d3d );             
        SDK_FIXED_SIZE( notify_order_level_t, 0x48 );             
    };                                     
};
#include "magic/notify_order_level_t.end.hpp"
SDK_VERIFY( struct po::notify_order_level_t, 0x48 );
