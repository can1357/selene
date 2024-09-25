#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/in6_addr_t.hpp"
#include "gfp_wildcard_match_type_t.hpp"

#include "magic/gfp_ipv6_address_wildcard_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_ipv6_address_wildcard_match_t                  
    {                                                         
        union u0_match_value_t                                
        {                                                     
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                                
            _m02 uint32_t prefix_length;                        //{ +0x0000    +0x0000    +0x0000    } | .PrefixLength
            _m03 uint32_t range_size;                           //{ +0x0000    +0x0000    +0x0000    } | .RangeSize
                                                              
            SDK_MAGIC_PROPERTIES( "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.MatchValue.$", 0x4, true, 0x8e3f67d264bddbb0 );                          
            SDK_FIXED_SIZE( u0_match_value_t, 0x4 );                          
        };                                                    
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                    
        _m00 enum ndis::gfp_wildcard_match_type_t match_type;   //{ +0x0000    +0x0000    +0x0000    } | .MatchType
        _m01 struct nt::in6_addr_t                ip_address;   //{ +0x0004    +0x0004    +0x0004    } | .IPAddress
        _m04 u0_match_value_t                     match_value;  //{ +0x0014    +0x0014    +0x0014    } | .MatchValue
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.$", 0x18, true, 0xf1ea5975870a17c5 );            
        SDK_FIXED_SIZE( gfp_ipv6_address_wildcard_match_t, 0x18 );            
    };                                                        
};
#include "magic/gfp_ipv6_address_wildcard_match_t.end.hpp"
SDK_VERIFY( union ndis::gfp_ipv6_address_wildcard_match_t::u0_match_value_t, 0x4 );
SDK_VERIFY( struct ndis::gfp_ipv6_address_wildcard_match_t, 0x18 );
