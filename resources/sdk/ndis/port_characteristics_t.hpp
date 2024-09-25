#pragma once
#include <sdkgen/support_library.hpp>
#include "port_type_t.hpp"
#include "object_header_t.hpp"
#include "port_control_state_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "port_authorization_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

#include "magic/port_characteristics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PORT_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_characteristics_t                                             
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                    
        _m00 struct ndis::object_header_t            header;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                port_number;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PortNumber
        _m02 uint32_t                                flags;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 enum ndis::port_type_t                  type;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
        _m04 enum ndis::net_if_media_connect_state_t media_connect_state;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MediaConnectState
        _m05 uint64_t                                xmit_link_speed;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .XmitLinkSpeed
        _m06 uint64_t                                rcv_link_speed;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RcvLinkSpeed
        _m07 enum ndis::net_if_direction_type_t      direction;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Direction
        _m08 enum ndis::port_control_state_t         send_control_state;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SendControlState
        _m09 enum ndis::port_control_state_t         rcv_control_state;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RcvControlState
        _m10 enum ndis::port_authorization_state_t   send_authorization_state;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .SendAuthorizationState
        _m11 enum ndis::port_authorization_state_t   rcv_authorization_state;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RcvAuthorizationState
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_PORT_CHARACTERISTICS.$", 0x40, true, 0x8828319caa6e7c8e );                         
        SDK_FIXED_SIZE( port_characteristics_t, 0x40 );                         
    };                                                                        
};
#include "magic/port_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::port_characteristics_t, 0x40 );
