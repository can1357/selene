#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_connection_offload_encapsulation_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_connection_offload_encapsulation_t
    {                                            
        struct u0_v4_t                           
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                  
            _m00 uint8_t  enabled;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
            _m01 uint32_t encapsulation_type;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EncapsulationType
            _m02 uint32_t header_size;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeaderSize
                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V4.$", 0xc, true, 0xf2c98ba88c987509 );                      
            SDK_FIXED_SIZE( u0_v4_t, 0xc );                      
        };                                       
                                                 
        struct u4_v6_t                           
        {                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                  
            _m04 uint8_t  enabled;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
            _m05 uint32_t encapsulation_type;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EncapsulationType
            _m06 uint32_t header_size;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeaderSize
                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.V6.$", 0xc, true, 0x9d8fafb6e241f57a );                      
            SDK_FIXED_SIZE( u4_v6_t, 0xc );                      
        };                                       
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //                                      
        _m03 u0_v4_t                         v4;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .V4
        _m07 u4_v6_t                         v6;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .V6
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION.$", 0x18, true, 0xe16006d06221ecb1 );   
        SDK_FIXED_SIZE( tcp_connection_offload_encapsulation_t, 0x18 );   
    };                                           
};
#include "magic/tcp_connection_offload_encapsulation_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_connection_offload_encapsulation_t::u0_v4_t, 0xc );
SDK_VERIFY( struct ndis::tcp_connection_offload_encapsulation_t::u4_v6_t, 0xc );
SDK_VERIFY( struct ndis::tcp_connection_offload_encapsulation_t, 0x18 );
