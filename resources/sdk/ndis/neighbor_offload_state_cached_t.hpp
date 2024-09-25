#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/neighbor_offload_state_cached_t.start.hpp"
namespace ndis
{
    // [struct _NEIGHBOR_OFFLOAD_STATE_CACHED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct neighbor_offload_state_cached_t                               
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                               
        _m00 struct ndis::offload_state_header_t header;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 32>             dl_destination_address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DlDestinationAddress
        _m02 uint32_t                            host_reachability_delta;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HostReachabilityDelta
                                                                         
        SDK_MAGIC_PROPERTIES( "_NEIGHBOR_OFFLOAD_STATE_CACHED.$", 0x2c, true, 0x8376140d71c3c6ea );                        
        SDK_FIXED_SIZE( neighbor_offload_state_cached_t, 0x2c );                        
    };                                                                   
};
#include "magic/neighbor_offload_state_cached_t.end.hpp"
SDK_VERIFY( struct ndis::neighbor_offload_state_cached_t, 0x2c );
