#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_offload_v1_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IPSEC_OFFLOAD_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v1_t                                 
    {                                                         
        struct u0_supported_t                                 
        {                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                
            _m00 uint32_t encapsulation;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m01 uint32_t ah_esp_combined;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AhEspCombined
            _m02 uint32_t transport_tunnel_combined;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TransportTunnelCombined
            _m03 uint32_t i_pv4_options;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IPv4Options
            _m04 uint32_t flags;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1.Supported.$", 0x14, true, 0xd3e6dd23deefaac7 );                                    
            SDK_FIXED_SIZE( u0_supported_t, 0x14 );                                    
        };                                                    
                                                              
        struct u4_i_pv4ah_t                                   
        {                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                                
            _m06 uint2_t md5;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Md5
            _m07 uint2_t sha_1;                                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Sha_1
            _m08 uint2_t transport;                             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Transport
            _m09 uint2_t tunnel;                                //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Tunnel
            _m10 uint2_t send;                                  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Send
            _m11 uint2_t receive;                               //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Receive
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.$", 0x4, true, 0x273770a188710e57 );                    
            SDK_FIXED_SIZE( u4_i_pv4ah_t, 0x4 );                    
        };                                                    
                                                              
        struct u8_i_pv4esp_t                                  
        {                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                                
            _m13 uint2_t des;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Des
            _m14 uint2_t triple_des;                            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .TripleDes
            _m15 uint2_t null_esp;                              //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .NullEsp
            _m16 uint2_t transport;                             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Transport
            _m17 uint2_t tunnel;                                //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Tunnel
            _m18 uint2_t send;                                  //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Send
            _m19 uint2_t receive;                               //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Receive
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.$", 0x4, true, 0xe163c718067ed5ed );                     
            SDK_FIXED_SIZE( u8_i_pv4esp_t, 0x4 );                     
        };                                                    
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                    
        _m05 u0_supported_t                         supported;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Supported
        _m12 u4_i_pv4ah_t                           i_pv4ah;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .IPv4AH
        _m20 u8_i_pv4esp_t                          i_pv4esp;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IPv4ESP
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V1.$", 0x1c, true, 0x8d2767796d648da8 );          
        SDK_FIXED_SIZE( ipsec_offload_v1_t, 0x1c );           
    };                                                        
};
#include "magic/ipsec_offload_v1_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v1_t::u0_supported_t, 0x14 );
SDK_VERIFY( struct ndis::ipsec_offload_v1_t::u4_i_pv4ah_t, 0x4 );
SDK_VERIFY( struct ndis::ipsec_offload_v1_t::u8_i_pv4esp_t, 0x4 );
SDK_VERIFY( struct ndis::ipsec_offload_v1_t, 0x1c );
