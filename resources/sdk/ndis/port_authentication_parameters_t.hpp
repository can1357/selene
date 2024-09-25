#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "port_control_state_t.hpp"
#include "port_authorization_state_t.hpp"

#include "magic/port_authentication_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PORT_AUTHENTICATION_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_authentication_parameters_t                                 
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                  
        _m00 struct ndis::object_header_t          header;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::port_control_state_t       send_control_state;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SendControlState
        _m02 enum ndis::port_control_state_t       rcv_control_state;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RcvControlState
        _m03 enum ndis::port_authorization_state_t send_authorization_state;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SendAuthorizationState
        _m04 enum ndis::port_authorization_state_t rcv_authorization_state;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RcvAuthorizationState
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_PORT_AUTHENTICATION_PARAMETERS.$", 0x14, true, 0xb3f2de13c681d862 );                         
        SDK_FIXED_SIZE( port_authentication_parameters_t, 0x14 );                         
    };                                                                      
};
#include "magic/port_authentication_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::port_authentication_parameters_t, 0x14 );
