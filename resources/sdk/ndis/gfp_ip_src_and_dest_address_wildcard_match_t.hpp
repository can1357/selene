#pragma once
#include <sdkgen/support_library.hpp>
#include "gfp_ipv4_src_and_dest_address_wildcard_match_t.hpp"
#include "gfp_ipv6_src_and_dest_address_wildcard_match_t.hpp"

#include "magic/gfp_ip_src_and_dest_address_wildcard_match_t.start.hpp"
namespace ndis
{
    // [union _NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union gfp_ip_src_and_dest_address_wildcard_match_t                
    {                                                                 
        using i_pv4_src_and_dest_address_t = struct ndis::gfp_ipv4_src_and_dest_address_wildcard_match_t;                           
        using i_pv6_src_and_dest_address_t = struct ndis::gfp_ipv6_src_and_dest_address_wildcard_match_t;                           
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                            
        _m00 i_pv4_src_and_dest_address_t  i_pv4_src_and_dest_address;  //{ +0x0000    +0x0000    +0x0000    } | .IPv4SrcAndDestAddress
        _m01 i_pv6_src_and_dest_address_t  i_pv6_src_and_dest_address;  //{ +0x0000    +0x0000    +0x0000    } | .IPv6SrcAndDestAddress
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.$", 0x30, true, 0xdef685c458f84c77 );                           
        SDK_FIXED_SIZE( gfp_ip_src_and_dest_address_wildcard_match_t, 0x30 );                           
    };                                                                
};
#include "magic/gfp_ip_src_and_dest_address_wildcard_match_t.end.hpp"
SDK_VERIFY( union ndis::gfp_ip_src_and_dest_address_wildcard_match_t, 0x30 );
