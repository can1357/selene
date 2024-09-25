#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_offload_v1_net_buffer_list_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v1_net_buffer_list_info_t  
    {                                               
        struct u0_transmit_t                        
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                      
            _m00 void* offload_handle;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffloadHandle
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Transmit.$", 0x8, true, 0xe78c907a35c9cdb2 );                        
            SDK_FIXED_SIZE( u0_transmit_t, 0x8 );                        
        };                                          
                                                    
        struct u4_receive_t                         
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                      
            _m02 uint1_t  sa_delete_req;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SaDeleteReq
            _m03 uint1_t  crypto_done;                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CryptoDone
            _m04 uint1_t  next_crypto_done;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .NextCryptoDone
            _m05 uint16_t crypto_status;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CryptoStatus
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Receive.$", 0x4, true, 0xb132a69807262f10 );                          
            SDK_FIXED_SIZE( u4_receive_t, 0x4 );                          
        };                                          
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                          
        _m01 u0_transmit_t                 transmit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m06 u4_receive_t                  receive;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Receive
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.$", 0x8, true, 0xf03b11ef565edec5 );         
        SDK_FIXED_SIZE( ipsec_offload_v1_net_buffer_list_info_t, 0x8 );         
    };                                              
};
#include "magic/ipsec_offload_v1_net_buffer_list_info_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v1_net_buffer_list_info_t::u0_transmit_t, 0x8 );
SDK_VERIFY( struct ndis::ipsec_offload_v1_net_buffer_list_info_t::u4_receive_t, 0x4 );
SDK_VERIFY( struct ndis::ipsec_offload_v1_net_buffer_list_info_t, 0x8 );
