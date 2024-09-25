#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../power/state_t.hpp"
#include "irp_watchdog_state_t.hpp"
#include "../power/state_type_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "pep_notify_device_dstate_reason_t.hpp"

namespace io { struct status_block_t;  }
namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }
namespace po { struct device_notify_t; }

#include "magic/irp_data_t.start.hpp"
namespace pop
{
    struct fx_device_t;

    // [struct _POP_IRP_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_data_t                                                                                   
    {                                                                                                   
        struct u0_device_t                                                                              
        {                                                                                               
            using caller_completion_t = sdk::function<void(struct nt::device_object_t*, uint8_t, union power::state_t, void*, struct io::status_block_t*)>*;                                                          
                                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
            //                                                                                          
            _m14 caller_completion_t          caller_completion;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CallerCompletion
            _m15 void*                        caller_context;                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallerContext
            _m16 struct nt::device_object_t*  caller_device;                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CallerDevice
            _m17 uint8_t                      system_wake;                                                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SystemWake
                                                                                                        
            // Windows 11                                                                               
            //                                                                                          
            _m18 struct nt::work_queue_item_t passive_completion_work_item;                               //{ +0x0020    } | .PassiveCompletionWorkItem
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_POP_IRP_DATA.Device.$", 0x20, true, 0x9bdefbf03d3990eb );                                                          
            SDK_DYNAMIC_SIZE( u0_device_t );                                                            
        };                                                                                              
                                                                                                        
        struct u4_system_t                                                                              
        {                                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                                                          
            _m20 struct po::device_notify_t* notify_device;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotifyDevice
            _m21 uint8_t                     fx_device_activated;                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FxDeviceActivated
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_POP_IRP_DATA.System.$", 0x10, true, 0x2ae9c316cd70b271 );                                                 
            SDK_FIXED_SIZE( u4_system_t, 0x10 );                                                        
        };                                                                                              
                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                              
        _m00 nt::list_entry_t                                              link;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct nt::irp_t*                                             irp;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Irp
        _m02 struct nt::device_object_t*                                   pdo;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pdo
        _m03 struct nt::device_object_t*                                   target_device;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetDevice
        _m04 struct nt::device_object_t*                                   current_device;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentDevice
        _m05 uint64_t                                                      watchdog_start;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WatchdogStart
        _m06 struct nt::ktimer_t                                           watchdog_timer;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WatchdogTimer
        _m07 struct nt::kdpc_t                                             watchdog_dpc;                  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .WatchdogDpc
        _m08 uint8_t                                                       minor_function;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .MinorFunction
        _m09 enum power::state_type_t                                      power_state_type;              //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .PowerStateType
        _m10 union power::state_t                                          power_state;                   //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .PowerState
        _m11 struct pop::fx_device_t*                                      fx_device;                     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .FxDevice
        _m12 uint8_t                                                       system_transition;             //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .SystemTransition
        _m13 uint8_t                                                       notify_pep;                    //{ +0x00d1    +0x00d1    +0x00d1    +0x00d1    } | .NotifyPEP
        _m19 u0_device_t                                                   device;                        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .Device
        _m22 u4_system_t                                                   system;                        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .System
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m23 int32_t                                                       irp_sequence_id;               //{ +0x00d4    +0x00d4    +0x00d4    } | .IrpSequenceID
        _m24 enum pop::pep_notify_device_dstate_reason_t                   d_state_reason;                //{ +0x00f8    +0x0118    +0x00f8    } | .DStateReason
                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                                              
        _m25 uint8_t                                                       watchdog_enabled;              //{ +0x00c4    +0x00c4    +0x00c4    } | .WatchdogEnabled
                                                                                                        
        // Windows 11                                                                                   
        //                                                                                              
        _m26 uint64_t                                                      watchdog_lock;                 //{ +0x0120    } | .WatchdogLock
        _m27 enum pop::irp_watchdog_state_t                                watchdog_state;                //{ +0x0128    } | .WatchdogState
        _m28 uint64_t                                                      blackbox_watchdog_start_time;  //{ +0x0130    } | .BlackboxWatchdogStartTime
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_POP_IRP_DATA.$", 0x100, true, 0xa7fda891b12d3da6 );                             
        SDK_DYNAMIC_SIZE( irp_data_t );                                                                 
    };                                                                                                  
};
#include "magic/irp_data_t.end.hpp"
SDK_VERIFY( struct pop::irp_data_t::u4_system_t, 0x10 );
