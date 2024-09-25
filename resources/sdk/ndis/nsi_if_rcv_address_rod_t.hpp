#pragma once
#include <sdkgen/support_library.hpp>
#include "net_if_rcv_address_type_t.hpp"

#include "magic/nsi_if_rcv_address_rod_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NSI_IF_RCV_ADDRESS_ROD]
    // => Windows 10 v1607
    //
    struct nsi_if_rcv_address_rod_t                                     
    {                                                                   
        // Windows 10 v1607                                             
        //                                                              
        _m00 enum ndis::net_if_rcv_address_type_t if_rcv_address_type;    //{ +0x0000    } | .ifRcvAddressType
        _m01 uint16_t                             if_rcv_address_length;  //{ +0x0004    } | .ifRcvAddressLength
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_NSI_IF_RCV_ADDRESS_ROD.$", 0x0, false, 0xa920b1c808967db7 );                      
        SDK_FIXED_SIZE( nsi_if_rcv_address_rod_t, 0x8 );                      
    };                                                                  
};
#include "magic/nsi_if_rcv_address_rod_t.end.hpp"
SDK_VERIFY( struct ndis::nsi_if_rcv_address_rod_t, 0x8 );
