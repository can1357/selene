#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "port_control_state_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "port_authorization_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

#include "magic/port_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PORT_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_state_t                                                       
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                    
        _m00 struct ndis::object_header_t            header;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::net_if_media_connect_state_t media_connect_state;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MediaConnectState
        _m02 uint64_t                                xmit_link_speed;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .XmitLinkSpeed
        _m03 uint64_t                                rcv_link_speed;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RcvLinkSpeed
        _m04 enum ndis::net_if_direction_type_t      direction;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Direction
        _m05 enum ndis::port_control_state_t         send_control_state;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SendControlState
        _m06 enum ndis::port_control_state_t         rcv_control_state;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RcvControlState
        _m07 enum ndis::port_authorization_state_t   send_authorization_state;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SendAuthorizationState
        _m08 enum ndis::port_authorization_state_t   rcv_authorization_state;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RcvAuthorizationState
        _m09 uint32_t                                flags;                     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_PORT_STATE.$", 0x30, true, 0xc2735350df53c4fa );                         
        SDK_FIXED_SIZE( port_state_t, 0x30 );                                 
    };                                                                        
};
#include "magic/port_state_t.end.hpp"
SDK_VERIFY( struct ndis::port_state_t, 0x30 );
