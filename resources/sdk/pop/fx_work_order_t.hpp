#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/fx_work_order_t.start.hpp"
namespace pop
{
    struct fx_work_order_watchdog_info_t;

    // [struct _POP_FX_WORK_ORDER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_work_order_t                                                  
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                  
        _m00 struct nt::work_queue_item_t               work_item;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 int32_t                                    work_count;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WorkCount
        _m02 void*                                      context;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Context
        _m03 struct pop::fx_work_order_watchdog_info_t* watchdog_timer_info;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WatchdogTimerInfo
                                                                            
        SDK_MAGIC_PROPERTIES( "_POP_FX_WORK_ORDER.$", 0x38, true, 0xbfd38553e35e5c65 );                    
        SDK_FIXED_SIZE( fx_work_order_t, 0x38 );                            
    };                                                                      
};
#include "magic/fx_work_order_t.end.hpp"
SDK_VERIFY( struct pop::fx_work_order_t, 0x38 );
