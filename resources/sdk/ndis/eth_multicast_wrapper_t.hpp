#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eth_multicast_wrapper_t.start.hpp"
namespace ndis
{
    // [struct _ETH_MULTICAST_WRAPPER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eth_multicast_wrapper_t                 
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint32_t               ref_count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 sdk::array<uint8_t, 6> m_cast_address;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MCastAddress
                                                   
        SDK_MAGIC_PROPERTIES( "_ETH_MULTICAST_WRAPPER.$", 0xc, true, 0x256fd3e23ee0f36c );               
        SDK_FIXED_SIZE( eth_multicast_wrapper_t, 0xc );               
    };                                             
};
#include "magic/eth_multicast_wrapper_t.end.hpp"
SDK_VERIFY( struct ndis::eth_multicast_wrapper_t, 0xc );
