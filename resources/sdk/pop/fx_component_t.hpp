#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/kevent_t.hpp"
#include "fx_accounting_t.hpp"
#include "fx_work_order_t.hpp"
#include "fx_component_flags_t.hpp"

#include "magic/fx_component_t.start.hpp"
namespace pop
{
    struct fx_device_t;
    struct fx_provider_t;
    struct fx_dependent_t;
    struct fx_perf_info_t;
    struct fx_idle_state_t;
    struct component_power_profile_t;

    // [struct _POP_FX_COMPONENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_component_t                                                         
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                        
        _m00 struct nt::guid_t                        id;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint32_t                                 index;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Index
        _m02 struct pop::fx_work_order_t              work_order;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkOrder
        _m03 struct pop::fx_device_t*                 device;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Device
        _m04 volatile union pop::fx_component_flags_t flags;                        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Flags
        _m05 volatile int32_t                         resident;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Resident
        _m06 struct nt::kevent_t                      active_event;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ActiveEvent
        _m07 uint64_t                                 idle_lock;                    //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .IdleLock
        _m08 volatile int32_t                         idle_condition_complete;      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .IdleConditionComplete
        _m09 volatile int32_t                         idle_state_complete;          //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .IdleStateComplete
        _m10 uint64_t                                 idle_stamp;                   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .IdleStamp
        _m11 volatile uint32_t                        current_idle_state;           //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .CurrentIdleState
        _m12 uint32_t                                 idle_state_count;             //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .IdleStateCount
        _m13 struct pop::fx_idle_state_t*             idle_states;                  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .IdleStates
        _m14 uint32_t                                 deepest_wakeable_idle_state;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DeepestWakeableIdleState
        _m15 uint32_t                                 provider_count;               //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .ProviderCount
        _m16 struct pop::fx_provider_t*               providers;                    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Providers
        _m17 uint32_t                                 idle_provider_count;          //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .IdleProviderCount
        _m18 uint32_t                                 dependent_count;              //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .DependentCount
        _m19 struct pop::fx_dependent_t*              dependents;                   //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Dependents
        _m20 struct pop::fx_accounting_t              accounting;                   //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .Accounting
        _m21 struct pop::fx_perf_info_t*              performance;                  //{ +0x00f8    +0x01a8    +0x01a8    +0x01a8    } | .Performance
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                        
        _m22 struct pop::component_power_profile_t*   power_profile;                //{ +0x01b0    +0x01b0    +0x01b0    } | .PowerProfile
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m23 nt::list_entry_t                         external_dependents;          //{ +0x01b8    } | .ExternalDependents
        _m24 nt::list_entry_t                         external_dependencies;        //{ +0x01c8    } | .ExternalDependencies
                                                                                  
        SDK_MAGIC_PROPERTIES( "_POP_FX_COMPONENT.$", 0x1b8, true, 0x15da9ed29432891e );                            
        SDK_DYNAMIC_SIZE( fx_component_t );                                       
    };                                                                            
};
#include "magic/fx_component_t.end.hpp"
