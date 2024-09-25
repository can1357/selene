#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kgate_t.hpp"
#include "../nt/kevent_t.hpp"
#include "write_calibration_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/partition_zeroing_t.start.hpp"
namespace mi
{
    struct zero_thread_context_t;

    // [struct _MI_PARTITION_ZEROING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_zeroing_t                                                       
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                           
        _m00 int32_t                           zero_free_page_slist_minimum;           //{ +0x001c    +0x001c    +0x0040    +0x001c    } | .ZeroFreePageSlistMinimum
        _m01 struct nt::work_queue_item_t      rebalance_zero_free_work_item;          //{ +0x0020    +0x0020    +0x0000    +0x0020    } | .RebalanceZeroFreeWorkItem
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                      
        //                                                                           
        _m02 struct nt::kevent_t               page_event;                             //{ +0x0000    +0x0000    +0x0000    } | .PageEvent
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                           
        _m03 volatile int32_t                  background_zeroing_disabled;            //{ +0x0044    +0x0020    +0x0044    } | .BackgroundZeroingDisabled
                                                                                     
        // Windows 10 v2004, Windows 10 v20H2                                        
        //                                                                           
        _m04 uint8_t                           thread_priority_static;                 //{ +0x0018    +0x0018    } | .ThreadPriorityStatic
        _m05 uint8_t                           adaptive_zeroing_enabled;               //{ +0x0019    +0x0019    } | .AdaptiveZeroingEnabled
        _m06 volatile int32_t                  node_count;                             //{ +0x0040    +0x0040    } | .NodeCount
        _m07 struct nt::kgate_t                large_boot_zeroing_complete;            //{ +0x0048    +0x0048    } | .LargeBootZeroingComplete
        _m08 struct mi::write_calibration_t    write_calibration;                      //{ +0x0060    +0x0060    } | .WriteCalibration
        _m09 uint8_t                           ipi_calibration_failed;                 //{ +0x0080    +0x0080    } | .IpiCalibrationFailed
        _m10 volatile int32_t                  active_processors_for_ipi_calibration;  //{ +0x0084    +0x0084    } | .ActiveProcessorsForIpiCalibration
        _m11 volatile int32_t                  nodes_ready_for_ipi_calibration;        //{ +0x0088    +0x0088    } | .NodesReadyForIpiCalibration
        _m12 struct nt::kevent_t               release_node_zeroing_threads;           //{ +0x0090    +0x0090    } | .ReleaseNodeZeroingThreads
        _m13 struct mi::zero_thread_context_t* thread_context;                         //{ +0x00a8    +0x00a8    } | .ThreadContext
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m14 uint8_t                           thread_active;                          //{ +0x0018    } | .ThreadActive
        _m15 volatile int32_t                  thread_count;                           //{ +0x0040    } | .ThreadCount
        _m16 struct nt::kgate_t                gate;                                   //{ +0x0048    } | .Gate
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m17 volatile int32_t                  boot_engines_calibrating;               //{ +0x0024    } | .BootEnginesCalibrating
        _m18 struct nt::kevent_t               boot_engines_calibration_waiters;       //{ +0x0028    } | .BootEnginesCalibrationWaiters
                                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_ZEROING.$", 0xb0, true, 0x7dfa4152ac2b5254 );                                      
        SDK_DYNAMIC_SIZE( partition_zeroing_t );                                      
    };                                                                               
};
#include "magic/partition_zeroing_t.end.hpp"
