#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/task_ipsec_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TASK_IPSEC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_ipsec_t                                       
    {                                                         
        struct u0_supported_t                                 
        {                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                
            _m00 uint32_t ah_esp_combined;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AH_ESP_COMBINED
            _m01 uint32_t transport_tunnel_combined;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TRANSPORT_TUNNEL_COMBINED
            _m02 uint32_t v4_options;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .V4_OPTIONS
            _m03 uint32_t reserved;                             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RESERVED
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_IPSEC.Supported.$", 0x10, true, 0xe21bfcda4aea4fef );                                    
            SDK_FIXED_SIZE( u0_supported_t, 0x10 );                                    
        };                                                    
                                                              
        struct u4_v4ah_t                                      
        {                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                                
            _m05 uint1_t md5;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MD5
            _m06 uint1_t sha_1;                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .SHA_1
            _m07 uint1_t transport;                             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Transport
            _m08 uint1_t tunnel;                                //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Tunnel
            _m09 uint1_t send;                                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Send
            _m10 uint1_t receive;                               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Receive
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_IPSEC.V4AH.$", 0x4, true, 0xbd321e989adef5ad );                    
            SDK_FIXED_SIZE( u4_v4ah_t, 0x4 );                    
        };                                                    
                                                              
        struct u8_v4esp_t                                     
        {                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                                
            _m12 uint1_t des;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DES
            _m13 uint1_t reserved;                              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RESERVED
            _m14 uint1_t triple_des;                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TRIPLE_DES
            _m15 uint1_t null_esp;                              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NULL_ESP
            _m16 uint1_t transport;                             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Transport
            _m17 uint1_t tunnel;                                //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Tunnel
            _m18 uint1_t send;                                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Send
            _m19 uint1_t receive;                               //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Receive
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_IPSEC.V4ESP.$", 0x4, true, 0xf149b357d7726953 );                     
            SDK_FIXED_SIZE( u8_v4esp_t, 0x4 );                     
        };                                                    
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                    
        _m04 u0_supported_t                         supported;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Supported
        _m11 u4_v4ah_t                              v4ah;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .V4AH
        _m20 u8_v4esp_t                             v4esp;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .V4ESP
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_TASK_IPSEC.$", 0x18, true, 0xd2a880f4ffd6df3f );          
        SDK_FIXED_SIZE( task_ipsec_t, 0x18 );                 
    };                                                        
};
#include "magic/task_ipsec_t.end.hpp"
SDK_VERIFY( struct ndis::task_ipsec_t::u0_supported_t, 0x10 );
SDK_VERIFY( struct ndis::task_ipsec_t::u4_v4ah_t, 0x4 );
SDK_VERIFY( struct ndis::task_ipsec_t::u8_v4esp_t, 0x4 );
SDK_VERIFY( struct ndis::task_ipsec_t, 0x18 );
