#pragma once
#include <sdkgen/support_library.hpp>
#include "application_protocol_negotiation_ext_t.hpp"
#include "application_protocol_negotiation_status_t.hpp"

#include "magic/pkg_context_application_protocol_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_ApplicationProtocol]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_application_protocol_t                                   
    {                                                                           
        using sec_application_protocol_negotiation_status_t = enum sec::application_protocol_negotiation_status_t;                  
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 sec_application_protocol_negotiation_status_t    proto_nego_status;  //{ +0x0000    +0x0000    +0x0000    } | .ProtoNegoStatus
        _m01 enum sec::application_protocol_negotiation_ext_t proto_nego_ext;     //{ +0x0004    +0x0004    +0x0004    } | .ProtoNegoExt
        _m02 uint8_t                                          protocol_id_size;   //{ +0x0008    +0x0008    +0x0008    } | .ProtocolIdSize
        _m03 sdk::array<uint8_t, 255>                         protocol_id;        //{ +0x0009    +0x0009    +0x0009    } | .ProtocolId
                                                                                
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_ApplicationProtocol.$", 0x108, true, 0x44fa24a3e53d26ec );                  
        SDK_FIXED_SIZE( pkg_context_application_protocol_t, 0x108 );                  
    };                                                                          
};
#include "magic/pkg_context_application_protocol_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_application_protocol_t, 0x108 );
