#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/neighbor_offload_state_delegated_t.start.hpp"
namespace ndis
{
    // [struct _NEIGHBOR_OFFLOAD_STATE_DELEGATED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct neighbor_offload_state_delegated_t                           
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                              
        _m00 struct ndis::offload_state_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                            nic_reachability_delta;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NicReachabilityDelta
                                                                        
        SDK_MAGIC_PROPERTIES( "_NEIGHBOR_OFFLOAD_STATE_DELEGATED.$", 0xc, true, 0x9aaeeec64a000715 );                       
        SDK_FIXED_SIZE( neighbor_offload_state_delegated_t, 0xc );                       
    };                                                                  
};
#include "magic/neighbor_offload_state_delegated_t.end.hpp"
SDK_VERIFY( struct ndis::neighbor_offload_state_delegated_t, 0xc );
