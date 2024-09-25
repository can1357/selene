#pragma once
#include <sdkgen/support_library.hpp>
#include "store_inpage_complete_flags_t.hpp"

namespace nt { struct mmpfn_t; }

#include "magic/hard_fault_state_t.start.hpp"
namespace mi
{
    // [struct _MI_HARD_FAULT_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hard_fault_state_t                                     
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                        
        _m00 struct nt::mmpfn_t*                      swap_pfn;     //{ +0x0000    +0x0000    +0x0000    } | .SwapPfn
        _m01 struct mi::store_inpage_complete_flags_t store_flags;  //{ +0x0008    +0x0008    +0x0008    } | .StoreFlags
                                                                  
        SDK_MAGIC_PROPERTIES( "_MI_HARD_FAULT_STATE.$", 0x10, true, 0x3eb0544e76e6f7f6 );            
        SDK_FIXED_SIZE( hard_fault_state_t, 0x10 );               
    };                                                            
};
#include "magic/hard_fault_state_t.end.hpp"
SDK_VERIFY( struct mi::hard_fault_state_t, 0x10 );
