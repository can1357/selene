#pragma once
#include <sdkgen/support_library.hpp>
#include "gfp_wildcard_match_type_t.hpp"

#include "magic/gfp_transport_port_wildcard_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_transport_port_wildcard_match_t               
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                   
        _m00 enum ndis::gfp_wildcard_match_type_t match_type;  //{ +0x0000    +0x0000    +0x0000    } | .MatchType
        _m01 uint16_t                             port;        //{ +0x0004    +0x0004    +0x0004    } | .Port
        _m02 uint16_t                             range;       //{ +0x0006    +0x0006    +0x0006    } | .Range
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH.$", 0x8, true, 0x3699089a71119254 );           
        SDK_FIXED_SIZE( gfp_transport_port_wildcard_match_t, 0x8 );           
    };                                                       
};
#include "magic/gfp_transport_port_wildcard_match_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_transport_port_wildcard_match_t, 0x8 );
