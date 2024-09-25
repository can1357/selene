#pragma once
#include <sdkgen/support_library.hpp>
#include "device_power_state_t.hpp"
#include "device_power_policy_state_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct kthread_t;       }

#include "magic/power_routine_timed_out_data_v1_15_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct _WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15]
    // => Windows 10 v1607
    //
    struct power_routine_timed_out_data_v1_15_t                       
    {                                                                 
        // Windows 10 v1607                                           
        //                                                            
        _m00 enum wdf::device_power_state_t        power_state;         //{ +0x0000    } | .PowerState
        _m01 enum wdf::device_power_policy_state_t power_policy_state;  //{ +0x0004    } | .PowerPolicyState
        _m02 struct nt::device_object_t*           device_object;       //{ +0x0008    } | .DeviceObject
        _m03 struct wdf::wdfdevice_t*              device;              //{ +0x0010    } | .Device
        _m04 struct nt::kthread_t*                 timed_out_thread;    //{ +0x0018    } | .TimedOutThread
                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_POWER_ROUTINE_TIMED_OUT_DATA_V1_15.$", 0x0, false, 0xeaaa016a98e91219 );                   
        SDK_FIXED_SIZE( power_routine_timed_out_data_v1_15_t, 0x20 );                   
    };                                                                
};
#include "magic/power_routine_timed_out_data_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::power_routine_timed_out_data_v1_15_t, 0x20 );
