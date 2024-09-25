#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "ktimer_t.hpp"

#include "magic/lazy_writer_t.start.hpp"
namespace nt
{
    // [struct _LAZY_WRITER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lazy_writer_t                                       
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                     
        _m00 struct nt::ktimer_t scan_timer;                     //{ +0x0040    +0x0040    +0x0000    +0x0040    } | .ScanTimer
        _m01 uint8_t             scan_active;                    //{ +0x0080    +0x0080    +0x0041    +0x0080    } | .ScanActive
        _m02 uint8_t             other_work;                     //{ +0x0081    +0x0081    +0x0042    +0x0081    } | .OtherWork
        _m03 uint8_t             pending_teardown_scan;          //{ +0x0082    +0x0082    +0x0043    +0x0082    } | .PendingTeardownScan
        _m04 uint8_t             pending_periodic_scan;          //{ +0x0083    +0x0083    +0x0044    +0x0083    } | .PendingPeriodicScan
        _m05 uint8_t             pending_low_memory_scan;        //{ +0x0084    +0x0084    +0x0045    +0x0084    } | .PendingLowMemoryScan
        _m06 uint8_t             pending_power_scan;             //{ +0x0085    +0x0085    +0x0046    +0x0085    } | .PendingPowerScan
        _m07 uint8_t             pending_coalescing_flush_scan;  //{ +0x0086    +0x0086    +0x0047    +0x0086    } | .PendingCoalescingFlushScan
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                              
        //                                                     
        _m08 struct nt::kdpc_t   scan_dpc;                       //{ +0x0000    +0x0000    +0x0000    } | .ScanDpc
                                                               
        // Windows 11                                          
        //                                                     
        _m09 uint8_t             timer_initialized;              //{ +0x0040    } | .TimerInitialized
                                                               
        SDK_MAGIC_PROPERTIES( "_LAZY_WRITER.$", 0x88, true, 0xebc956ffc93c82c );                              
        SDK_DYNAMIC_SIZE( lazy_writer_t );                              
    };                                                         
};
#include "magic/lazy_writer_t.end.hpp"
