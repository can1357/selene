#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/system_power_state_t.hpp"
#include "../po/device_notify_order_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct kevent_t;        }
namespace nt { struct ksemaphore_t;    }
namespace nt { struct kthread_t;       }

#include "magic/device_sys_state_t.start.hpp"
namespace pop
{
    // [struct _POP_DEVICE_SYS_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_sys_state_t                                            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                               
        _m00 uint8_t                          irp_minor;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IrpMinor
        _m01 enum nt::system_power_state_t    system_state;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemState
        _m02 uint64_t                         spin_lock;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SpinLock
        _m03 struct nt::kthread_t*            thread;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Thread
        _m04 struct nt::kevent_t*             abort_event;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AbortEvent
        _m05 struct nt::ksemaphore_t*         ready_semaphore;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReadySemaphore
        _m06 struct nt::ksemaphore_t*         finished_semaphore;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FinishedSemaphore
        _m07 struct po::device_notify_order_t order;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Order
        _m08 nt::list_entry_t                 pending;                     //{ +0x01a8    +0x01b0    +0x01b0    +0x01b0    } | .Pending
        _m09 int32_t                          status;                      //{ +0x01b8    +0x01c0    +0x01c0    +0x01c0    } | .Status
        _m10 struct nt::device_object_t*      failed_device;               //{ +0x01c0    +0x01c8    +0x01c8    +0x01c8    } | .FailedDevice
        _m11 uint8_t                          waking;                      //{ +0x01c8    +0x01d0    +0x01d0    +0x01d0    } | .Waking
        _m12 uint8_t                          cancelled;                   //{ +0x01c9    +0x01d1    +0x01d1    +0x01d1    } | .Cancelled
        _m13 uint8_t                          ignore_errors;               //{ +0x01ca    +0x01d2    +0x01d2    +0x01d2    } | .IgnoreErrors
        _m14 uint8_t                          ignore_not_implemented;      //{ +0x01cb    +0x01d3    +0x01d3    +0x01d3    } | .IgnoreNotImplemented
        _m15 uint8_t                          time_refresh_lock_acquired;  //{ +0x01cc    +0x01d4    +0x01d4    +0x01d4    } | .TimeRefreshLockAcquired
                                                                         
        SDK_MAGIC_PROPERTIES( "_POP_DEVICE_SYS_STATE.$", 0x1d8, true, 0xe0972775d4b00b3e );                           
        SDK_DYNAMIC_SIZE( device_sys_state_t );                           
    };                                                                   
};
#include "magic/device_sys_state_t.end.hpp"
