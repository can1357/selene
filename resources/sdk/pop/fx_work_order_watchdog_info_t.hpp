#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"

namespace nt  { struct kthread_t;          }
namespace pep { struct work_information_t; }

#include "magic/fx_work_order_watchdog_info_t.start.hpp"
namespace pop
{
    struct fx_work_order_t;

    // [struct _POP_FX_WORK_ORDER_WATCHDOG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_work_order_watchdog_info_t                       
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 struct nt::ktimer_t             timer;              //{ +0x0000    +0x0010    +0x0010    +0x0010    } | .Timer
        _m01 struct nt::kdpc_t               dpc;                //{ +0x0040    +0x0050    +0x0050    +0x0050    } | .Dpc
        _m02 struct pop::fx_work_order_t*    work_order;         //{ +0x0080    +0x0090    +0x0090    +0x0090    } | .WorkOrder
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m03 nt::list_entry_t                link;               //{ +0x0000    +0x0000    +0x0000    } | .Link
        _m04 struct pep::work_information_t* current_work_info;  //{ +0x0098    +0x0098    +0x0098    } | .CurrentWorkInfo
        _m05 uint64_t                        watchdog_start;     //{ +0x00a0    +0x00a0    +0x00a0    } | .WatchdogStart
        _m06 struct nt::kthread_t*           worker_thread;      //{ +0x00a8    +0x00a8    +0x00a8    } | .WorkerThread
                                                               
        SDK_MAGIC_PROPERTIES( "_POP_FX_WORK_ORDER_WATCHDOG_INFO.$", 0xb0, true, 0xbb0820caee07e585 );                  
        SDK_DYNAMIC_SIZE( fx_work_order_watchdog_info_t );                  
    };                                                         
};
#include "magic/fx_work_order_watchdog_info_t.end.hpp"
