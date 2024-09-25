#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "ipsec_offload_v2_security_association_t.hpp"

#include "magic/ipsec_offload_v2_add_sa_t.start.hpp"
namespace ndis
{
    struct ipsec_offload_v2_add_sa_t;

    // [struct _IPSEC_OFFLOAD_V2_ADD_SA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_add_sa_t                                       
    {                                                                      
        struct u0_i_pv4_endpoints_t                                        
        {                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                                             
            _m04 uint32_t src_addr;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SrcAddr
            _m05 uint32_t dest_addr;                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DestAddr
                                                                           
            SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_ADD_SA.IPv4Endpoints.$", 0x8, true, 0x9cdf8bdb96e246f8 );                                
            SDK_FIXED_SIZE( u0_i_pv4_endpoints_t, 0x8 );                                
        };                                                                 
                                                                           
        struct u4_i_pv6_endpoints_t                                        
        {                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                                             
            _m07 sdk::array<uint8_t, 16> src_addr;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SrcAddr
            _m08 sdk::array<uint8_t, 16> dest_addr;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DestAddr
                                                                           
            SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_ADD_SA.IPv6Endpoints.$", 0x20, true, 0xc6950e6e36458109 );                                
            SDK_FIXED_SIZE( u4_i_pv6_endpoints_t, 0x20 );                                
        };                                                                 
                                                                           
        using sec_assoc_t = sdk::array<struct ndis::ipsec_offload_v2_security_association_t, 2>;                      
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                 
        _m00 struct ndis::object_header_t            header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::ipsec_offload_v2_add_sa_t* next;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Next
        _m02 uint32_t                                num_ext_hdrs;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumExtHdrs
        _m03 uint32_t                                flags;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m06 u0_i_pv4_endpoints_t                    i_pv4_endpoints;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IPv4Endpoints
        _m09 u4_i_pv6_endpoints_t                    i_pv6_endpoints;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IPv6Endpoints
        _m10 void*                                   offload_handle;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OffloadHandle
        _m11 uint32_t                                udp_esp_encapsulation;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .UdpEspEncapsulation
        _m12 sec_assoc_t                             sec_assoc;              //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .SecAssoc
        _m13 uint32_t                                key_length;             //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .KeyLength
        _m14 sdk::array<uint8_t, 1>                  key_data;               //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .KeyData
                                                                           
        SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_ADD_SA.$", 0xb0, true, 0x29637de91c7966fb );                      
        SDK_FIXED_SIZE( ipsec_offload_v2_add_sa_t, 0xb0 );                      
    };                                                                     
};
#include "magic/ipsec_offload_v2_add_sa_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_add_sa_t::u0_i_pv4_endpoints_t, 0x8 );
SDK_VERIFY( struct ndis::ipsec_offload_v2_add_sa_t::u4_i_pv6_endpoints_t, 0x20 );
SDK_VERIFY( struct ndis::ipsec_offload_v2_add_sa_t, 0xb0 );
