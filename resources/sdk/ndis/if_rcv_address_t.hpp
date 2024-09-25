#pragma once
#include <sdkgen/support_library.hpp>
#include "net_if_rcv_address_type_t.hpp"

#include "magic/if_rcv_address_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IF_RCV_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_rcv_address_t                                             
    {                                                                   
        // Windows 10 v1607                                             
        //                                                              
        _m00 enum ndis::net_if_rcv_address_type_t if_rcv_address_type;    //{ +0x0000    } | .ifRcvAddressType
        _m01 uint16_t                             if_rcv_address_length;  //{ +0x0004    } | .ifRcvAddressLength
        _m02 sdk::array<uint8_t, 32>              if_rcv_address;         //{ +0x0008    } | .ifRcvAddress
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_RCV_ADDRESS.$", 0x0, true, 0xa2cf921cfcf3e6fb );                      
        SDK_DYNAMIC_SIZE( if_rcv_address_t );                           
    };                                                                  
};
#include "magic/if_rcv_address_t.end.hpp"
