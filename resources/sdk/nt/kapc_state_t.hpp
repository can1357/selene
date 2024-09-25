#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kapc_state_t.start.hpp"
namespace nt
{
    struct kprocess_t;

    // [struct _KAPC_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kapc_state_t                                               
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                            
        _m00 sdk::array<nt::list_entry_t, 2> apc_list_head;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ApcListHead
        _m01 struct nt::kprocess_t*          process;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Process
        _m02 uint8_t                         in_progress_flags;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .InProgressFlags
        _m03 uint1_t                         kernel_apc_in_progress;    //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .KernelApcInProgress
        _m04 uint1_t                         special_apc_in_progress;   //{ +0x0028@1  +0x0028@1  +0x0028@1  +0x0028@1  +0x0028@1  } | .SpecialApcInProgress
        _m05 uint8_t                         kernel_apc_pending;        //{ +0x0029    +0x0029    +0x0029    +0x0029    +0x0029    } | .KernelApcPending
        _m06 varuint_t                       user_apc_pending;          //{ +0x002a@1  +0x002a    +0x002a@1  +0x002a@1  +0x002a@1  } | .UserApcPending
                                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                            
        _m07 uint8_t                         user_apc_pending_all;      //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .UserApcPendingAll
        _m08 uint1_t                         special_user_apc_pending;  //{ +0x002a@0  +0x002a@0  +0x002a@0  +0x002a@0  } | .SpecialUserApcPending
                                                                      
        SDK_NONVOL_PROPERTIES( "_KAPC_STATE.$", 0x30, true, 0x88e2f7d3a032386d );                         
        SDK_FIXED_SIZE( kapc_state_t, 0x30 );                         
    };                                                                
};
#include "magic/kapc_state_t.end.hpp"
SDK_VERIFY( struct nt::kapc_state_t, 0x30 );
