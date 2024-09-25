#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_packet_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IPSEC_PACKET_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_packet_info_t                      
    {                                               
        struct u0_transmit_t                        
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                      
            _m00 void* offload_handle;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffloadHandle
            _m01 void* next_offload_handle;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextOffloadHandle
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_PACKET_INFO.Transmit.$", 0x10, true, 0x59e369aa31ff3bae );                             
            SDK_FIXED_SIZE( u0_transmit_t, 0x10 );                             
        };                                          
                                                    
        struct u4_receive_t                         
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                      
            _m03 uint1_t  sa_delete_req;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SA_DELETE_REQ
            _m04 uint1_t  crypto_done;                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CRYPTO_DONE
            _m05 uint1_t  next_crypto_done;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .NEXT_CRYPTO_DONE
            _m06 uint32_t crypto_status;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CryptoStatus
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_PACKET_INFO.Receive.$", 0x8, true, 0xc62bdc02470daec8 );                          
            SDK_FIXED_SIZE( u4_receive_t, 0x8 );                          
        };                                          
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                          
        _m02 u0_transmit_t                 transmit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m07 u4_receive_t                  receive;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Receive
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_PACKET_INFO.$", 0x10, true, 0x5ac7d557b42e48e );         
        SDK_FIXED_SIZE( ipsec_packet_info_t, 0x10 );         
    };                                              
};
#include "magic/ipsec_packet_info_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_packet_info_t::u0_transmit_t, 0x10 );
SDK_VERIFY( struct ndis::ipsec_packet_info_t::u4_receive_t, 0x8 );
SDK_VERIFY( struct ndis::ipsec_packet_info_t, 0x10 );
