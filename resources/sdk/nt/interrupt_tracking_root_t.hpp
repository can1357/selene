#pragma once
#include <sdkgen/support_library.hpp>
#include "group_affinity_t.hpp"
#include "interrupt_vector_data_t.hpp"
#include "interrupt_steering_mode_t.hpp"

#include "magic/interrupt_tracking_root_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_TRACKING_ROOT]
    // => Windows 11
    //
    struct interrupt_tracking_root_t                                
    {                                                               
        // Windows 11                                               
        //                                                          
        _m00 nt::list_entry_t                   list_entry;           //{ +0x0000    } | .ListEntry
        _m01 nt::list_entry_t                   tracking_entry_list;  //{ +0x0010    } | .TrackingEntryList
        _m02 uint32_t                           gsiv;                 //{ +0x0020    } | .Gsiv
        _m03 struct nt::interrupt_vector_data_t vector_data;          //{ +0x0028    } | .VectorData
        _m04 enum nt::interrupt_steering_mode_t steering_mode;        //{ +0x0080    } | .SteeringMode
        _m05 uint8_t                            enable_steering;      //{ +0x0084    } | .EnableSteering
        _m06 struct nt::group_affinity_t        cpu_set_mask;         //{ +0x0088    } | .CpuSetMask
        _m07 uint64_t                           affinity_epoch;       //{ +0x0098    } | .AffinityEpoch
        _m08 struct nt::group_affinity_t        current_target;       //{ +0x00a0    } | .CurrentTarget
        _m09 struct nt::group_affinity_t        next_target;          //{ +0x00b0    } | .NextTarget
        _m10 uint64_t                           time_delta;           //{ +0x00c0    } | .TimeDelta
        _m11 void*                              redirect_handle;      //{ +0x00c8    } | .RedirectHandle
        _m12 nt::list_entry_t                   steer_queue_link;     //{ +0x00d0    } | .SteerQueueLink
                                                                    
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_TRACKING_ROOT.$", 0x0, false, 0xb8dcbbcc84fb6055 );                    
        SDK_FIXED_SIZE( interrupt_tracking_root_t, 0xe0 );                    
    };                                                              
};
#include "magic/interrupt_tracking_root_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_tracking_root_t, 0xe0 );
