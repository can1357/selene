#pragma once
#include <sdkgen/support_library.hpp>
#include "gft_counter_value_t.hpp"

#include "magic/gft_flow_entry_id_and_counter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_FLOW_ENTRY_ID_AND_COUNTER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_flow_entry_id_and_counter_t                  
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 uint64_t                         flow_entry_id;  //{ +0x0000    +0x0000    +0x0000    } | .FlowEntryId
        _m01 struct ndis::gft_counter_value_t counter_value;  //{ +0x0008    +0x0008    +0x0008    } | .CounterValue
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_FLOW_ENTRY_ID_AND_COUNTER.$", 0x30, true, 0xf5a779cfd691b39f );              
        SDK_FIXED_SIZE( gft_flow_entry_id_and_counter_t, 0x30 );              
    };                                                      
};
#include "magic/gft_flow_entry_id_and_counter_t.end.hpp"
SDK_VERIFY( struct ndis::gft_flow_entry_id_and_counter_t, 0x30 );
