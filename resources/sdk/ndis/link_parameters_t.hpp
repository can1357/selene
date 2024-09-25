#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "supported_pause_functions_t.hpp"

#include "magic/link_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_LINK_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct link_parameters_t                                               
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 struct ndis::object_header_t           header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::net_if_media_duplex_state_t media_duplex_state;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MediaDuplexState
        _m02 uint64_t                               xmit_link_speed;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .XmitLinkSpeed
        _m03 uint64_t                               rcv_link_speed;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RcvLinkSpeed
        _m04 enum ndis::supported_pause_functions_t pause_functions;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PauseFunctions
        _m05 uint32_t                               auto_negotiation_flags;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AutoNegotiationFlags
                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_LINK_PARAMETERS.$", 0x20, true, 0x710a1c4be2cdaa41 );                       
        SDK_FIXED_SIZE( link_parameters_t, 0x20 );                         
    };                                                                     
};
#include "magic/link_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::link_parameters_t, 0x20 );
