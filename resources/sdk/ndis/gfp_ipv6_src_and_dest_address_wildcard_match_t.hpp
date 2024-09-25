#pragma once
#include <sdkgen/support_library.hpp>
#include "gfp_ipv6_address_wildcard_match_t.hpp"

#include "magic/gfp_ipv6_src_and_dest_address_wildcard_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_ipv6_src_and_dest_address_wildcard_match_t                             
    {                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m00 struct ndis::gfp_ipv6_address_wildcard_match_t source_i_pv6_address;       //{ +0x0000    +0x0000    +0x0000    } | .SourceIPv6Address
        _m01 struct ndis::gfp_ipv6_address_wildcard_match_t destination_i_pv6_address;  //{ +0x0018    +0x0018    +0x0018    } | .DestinationIPv6Address
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.$", 0x30, true, 0xe09550595589dddd );                          
        SDK_FIXED_SIZE( gfp_ipv6_src_and_dest_address_wildcard_match_t, 0x30 );                          
    };                                                                                
};
#include "magic/gfp_ipv6_src_and_dest_address_wildcard_match_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_ipv6_src_and_dest_address_wildcard_match_t, 0x30 );
