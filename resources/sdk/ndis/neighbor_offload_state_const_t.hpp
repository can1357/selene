#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/neighbor_offload_state_const_t.start.hpp"
namespace ndis
{
    // [struct _NEIGHBOR_OFFLOAD_STATE_CONST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct neighbor_offload_state_const_t                          
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 struct ndis::offload_state_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 32>             dl_source_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DlSourceAddress
        _m02 uint12_t                            vlan_id;            //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .VlanId
                                                                   
        SDK_MAGIC_PROPERTIES( "_NEIGHBOR_OFFLOAD_STATE_CONST.$", 0x2c, true, 0xacb9f0f2c4199280 );                  
        SDK_FIXED_SIZE( neighbor_offload_state_const_t, 0x2c );                  
    };                                                             
};
#include "magic/neighbor_offload_state_const_t.end.hpp"
SDK_VERIFY( struct ndis::neighbor_offload_state_const_t, 0x2c );
