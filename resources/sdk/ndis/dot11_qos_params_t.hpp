#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_qos_params_t.start.hpp"
namespace ndis
{
    // [struct DOT11_QOS_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_qos_params_t                                            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                               
        _m00 struct ndis::object_header_t header;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                      uc_enabled_qo_s_protocol_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ucEnabledQoSProtocolFlags
                                                                         
        SDK_MAGIC_PROPERTIES( "DOT11_QOS_PARAMS.$", 0x6, true, 0x866da64871e17da7 );                               
        SDK_FIXED_SIZE( dot11_qos_params_t, 0x6 );                               
    };                                                                   
};
#include "magic/dot11_qos_params_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_qos_params_t, 0x6 );
