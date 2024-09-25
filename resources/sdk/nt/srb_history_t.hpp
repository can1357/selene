#pragma once
#include <sdkgen/support_library.hpp>
#include "srb_history_item_t.hpp"

#include "magic/srb_history_t.start.hpp"
namespace nt
{
    // [struct _SRB_HISTORY]
    // => WDK 10 (NV)
    //
    struct srb_history_t                                                      
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 sdk::array<uint64_t, 4>                      class_driver_use;     //{ +0x0000    } | .ClassDriverUse
        _m01 uint32_t                                     total_history_count;  //{ +0x0020    } | .TotalHistoryCount
        _m02 uint32_t                                     used_history_count;   //{ +0x0024    } | .UsedHistoryCount
        _m03 sdk::array<struct nt::srb_history_item_t, 1> history;              //{ +0x0028    } | .History
                                                                              
        SDK_NONVOL_PROPERTIES( "_SRB_HISTORY.$", 0x0, false, 0xe1997e290605561a );                    
        SDK_FIXED_SIZE( srb_history_t, 0x50 );                                
    };                                                                        
};
#include "magic/srb_history_t.end.hpp"
SDK_VERIFY( struct nt::srb_history_t, 0x50 );
