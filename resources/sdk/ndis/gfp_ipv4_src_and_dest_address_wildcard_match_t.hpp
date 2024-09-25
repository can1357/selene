#pragma once
#include <sdkgen/support_library.hpp>
#include "gfp_ipv4_address_wildcard_match_t.hpp"

#include "magic/gfp_ipv4_src_and_dest_address_wildcard_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_ipv4_src_and_dest_address_wildcard_match_t                             
    {                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m00 struct ndis::gfp_ipv4_address_wildcard_match_t source_i_pv4_address;       //{ +0x0000    +0x0000    +0x0000    } | .SourceIPv4Address
        _m01 struct ndis::gfp_ipv4_address_wildcard_match_t destination_i_pv4_address;  //{ +0x000c    +0x000c    +0x000c    } | .DestinationIPv4Address
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.$", 0x18, true, 0x4c8ddb1f11790c3e );                          
        SDK_FIXED_SIZE( gfp_ipv4_src_and_dest_address_wildcard_match_t, 0x18 );                          
    };                                                                                
};
#include "magic/gfp_ipv4_src_and_dest_address_wildcard_match_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_ipv4_src_and_dest_address_wildcard_match_t, 0x18 );
