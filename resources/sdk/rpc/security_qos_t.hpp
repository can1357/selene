#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/security_qos_t.start.hpp"
namespace rpc
{
    // [struct _RPC_SECURITY_QOS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct security_qos_t                
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t capabilities;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Capabilities
        _m02 uint32_t identity_tracking;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IdentityTracking
        _m03 uint32_t impersonation_type;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ImpersonationType
                                         
        SDK_MAGIC_PROPERTIES( "_RPC_SECURITY_QOS.$", 0x10, true, 0xe979664e37958f0a );                   
        SDK_FIXED_SIZE( security_qos_t, 0x10 );                   
    };                                   
};
#include "magic/security_qos_t.end.hpp"
SDK_VERIFY( struct rpc::security_qos_t, 0x10 );
