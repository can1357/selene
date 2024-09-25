#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/security_qos_v3_a_t.start.hpp"
namespace rpc
{
    struct http_transport_credentials_a_t;

    // [struct _RPC_SECURITY_QOS_V3_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct security_qos_v3_a_t                                                         
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                             
        _m00 uint32_t                                    version;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                    capabilities;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Capabilities
        _m02 uint32_t                                    identity_tracking;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IdentityTracking
        _m03 uint32_t                                    impersonation_type;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ImpersonationType
        _m04 uint32_t                                    additional_security_info_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AdditionalSecurityInfoType
        _m05 struct rpc::http_transport_credentials_a_t* http_credentials;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HttpCredentials
        _m06 void*                                       sid;                            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Sid
                                                                                       
        SDK_MAGIC_PROPERTIES( "_RPC_SECURITY_QOS_V3_A.$", 0x28, true, 0xe0661f11277f244c );                              
        SDK_FIXED_SIZE( security_qos_v3_a_t, 0x28 );                                   
    };                                                                                 
};
#include "magic/security_qos_v3_a_t.end.hpp"
SDK_VERIFY( struct rpc::security_qos_v3_a_t, 0x28 );
