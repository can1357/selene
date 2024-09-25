#pragma once
#include <sdkgen/support_library.hpp>

namespace sec { struct winnt_auth_identity_a_t; }

#include "magic/binding_handle_security_v1_a_t.start.hpp"
namespace rpc
{
    struct security_qos_t;

    // [struct _RPC_BINDING_HANDLE_SECURITY_V1_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct binding_handle_security_v1_a_t                           
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                          
        _m00 uint32_t                             version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t*                             server_princ_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServerPrincName
        _m02 uint32_t                             authn_level;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AuthnLevel
        _m03 uint32_t                             authn_svc;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AuthnSvc
        _m04 struct sec::winnt_auth_identity_a_t* auth_identity;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AuthIdentity
        _m05 struct rpc::security_qos_t*          security_qos;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SecurityQos
                                                                    
        SDK_MAGIC_PROPERTIES( "_RPC_BINDING_HANDLE_SECURITY_V1_A.$", 0x28, true, 0x16bad2db102b0956 );                  
        SDK_FIXED_SIZE( binding_handle_security_v1_a_t, 0x28 );                  
    };                                                              
};
#include "magic/binding_handle_security_v1_a_t.end.hpp"
SDK_VERIFY( struct rpc::binding_handle_security_v1_a_t, 0x28 );
