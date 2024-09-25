#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_wildcard_match_type_t.hpp"

#include "magic/gfp_header_group_wildcard_match_profile_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_header_group_wildcard_match_profile_t                                   
    {                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                             
        _m00 struct ndis::object_header_t         header;                                //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                             flags;                                 //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                             headers_present;                       //{ +0x0008    +0x0008    +0x0008    } | .HeadersPresent
        _m03 uint64_t                             match_fields;                          //{ +0x0010    +0x0010    +0x0010    } | .MatchFields
        _m04 enum ndis::gfp_wildcard_match_type_t source_i_pv4_address_match_type;       //{ +0x0018    +0x0018    +0x0018    } | .SourceIPv4AddressMatchType
        _m05 enum ndis::gfp_wildcard_match_type_t destination_i_pv4_address_match_type;  //{ +0x001c    +0x001c    +0x001c    } | .DestinationIPv4AddressMatchType
        _m06 enum ndis::gfp_wildcard_match_type_t source_i_pv6_address_match_type;       //{ +0x0020    +0x0020    +0x0020    } | .SourceIPv6AddressMatchType
        _m07 enum ndis::gfp_wildcard_match_type_t destination_i_pv6_address_match_type;  //{ +0x0024    +0x0024    +0x0024    } | .DestinationIPv6AddressMatchType
        _m08 enum ndis::gfp_wildcard_match_type_t source_port_match_type;                //{ +0x0028    +0x0028    +0x0028    } | .SourcePortMatchType
        _m09 enum ndis::gfp_wildcard_match_type_t destination_port_match_type;           //{ +0x002c    +0x002c    +0x002c    } | .DestinationPortMatchType
        _m10 uint8_t                              tcp_flags;                             //{ +0x0030    +0x0030    +0x0030    } | .TcpFlags
                                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.$", 0x38, true, 0xe43bb81270638ef5 );                                     
        SDK_FIXED_SIZE( gfp_header_group_wildcard_match_profile_t, 0x38 );                                     
    };                                                                                 
};
#include "magic/gfp_header_group_wildcard_match_profile_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_header_group_wildcard_match_profile_t, 0x38 );
