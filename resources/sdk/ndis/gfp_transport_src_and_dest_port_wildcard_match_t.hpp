#pragma once
#include <sdkgen/support_library.hpp>
#include "gfp_transport_port_wildcard_match_t.hpp"

#include "magic/gfp_transport_src_and_dest_port_wildcard_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_transport_src_and_dest_port_wildcard_match_t                    
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m00 struct ndis::gfp_transport_port_wildcard_match_t source_port;       //{ +0x0000    +0x0000    +0x0000    } | .SourcePort
        _m01 struct ndis::gfp_transport_port_wildcard_match_t destination_port;  //{ +0x0008    +0x0008    +0x0008    } | .DestinationPort
                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH.$", 0x10, true, 0xa9b746650a708e29 );                 
        SDK_FIXED_SIZE( gfp_transport_src_and_dest_port_wildcard_match_t, 0x10 );                 
    };                                                                         
};
#include "magic/gfp_transport_src_and_dest_port_wildcard_match_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_transport_src_and_dest_port_wildcard_match_t, 0x10 );
