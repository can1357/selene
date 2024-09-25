#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "fx_perf_flags_t.hpp"
#include "fx_work_order_t.hpp"

namespace po { struct fx_perf_state_change_t; }

#include "magic/fx_perf_info_t.start.hpp"
namespace pop
{
    struct fx_perf_set_t;
    struct fx_component_t;

    // [struct _POP_FX_PERF_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_perf_info_t                                               
    {                                                                   
        using component_perf_state_t = sdk::function<void(void*, uint32_t, uint8_t, void*)>*;                       
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                              
        _m00 struct pop::fx_component_t*         component;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Component
        _m01 struct nt::kevent_t                 completed_event;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletedEvent
        _m02 component_perf_state_t              component_perf_state;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ComponentPerfState
        _m03 volatile union pop::fx_perf_flags_t flags;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
        _m04 struct po::fx_perf_state_change_t*  last_change;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LastChange
        _m05 uint32_t                            last_change_count;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LastChangeCount
        _m06 uint64_t                            last_change_stamp;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LastChangeStamp
        _m07 uint8_t                             last_change_nominal;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LastChangeNominal
        _m08 uint8_t                             pep_registered;          //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .PepRegistered
        _m09 uint8_t                             query_on_idle_states;    //{ +0x004a    +0x004a    +0x004a    +0x004a    } | .QueryOnIdleStates
        _m10 void volatile*                      request_driver_context;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .RequestDriverContext
        _m11 struct pop::fx_work_order_t         work_order;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WorkOrder
        _m12 uint32_t                            sets_count;              //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .SetsCount
        _m13 struct pop::fx_perf_set_t*          sets;                    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .Sets
                                                                        
        SDK_MAGIC_PROPERTIES( "_POP_FX_PERF_INFO.$", 0xa0, true, 0x111b09b7a3dae550 );                       
        SDK_FIXED_SIZE( fx_perf_info_t, 0xa0 );                         
    };                                                                  
};
#include "magic/fx_perf_info_t.end.hpp"
SDK_VERIFY( struct pop::fx_perf_info_t, 0xa0 );
