#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_policy_t.hpp"
#include "interrupt_priority_t.hpp"
#include "../nt/group_affinity_t.hpp"

#include "magic/interrupt_extended_policy_t.start.hpp"
namespace wdf
{
    // [struct _WDF_INTERRUPT_EXTENDED_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interrupt_extended_policy_t                                     
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                 
        _m00 uint32_t                       size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::interrupt_policy_t   policy;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Policy
        _m02 enum wdf::interrupt_priority_t priority;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Priority
        _m03 struct nt::group_affinity_t    target_processor_set_and_group;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcessorSetAndGroup
                                                                           
        SDK_NONVOL_PROPERTIES( "_WDF_INTERRUPT_EXTENDED_POLICY.$", 0x20, true, 0x8b33b793c254dd70 );                               
        SDK_FIXED_SIZE( interrupt_extended_policy_t, 0x20 );                               
    };                                                                     
};
#include "magic/interrupt_extended_policy_t.end.hpp"
SDK_VERIFY( struct wdf::interrupt_extended_policy_t, 0x20 );
