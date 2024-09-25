#pragma once
#include <sdkgen/support_library.hpp>

namespace sec { struct winnt_auth_identity_a_t; }

#include "magic/http_transport_credentials_a_t.start.hpp"
namespace rpc
{
    // [struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct http_transport_credentials_a_t                                    
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                   
        _m00 struct sec::winnt_auth_identity_a_t* transport_credentials;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransportCredentials
        _m01 uint32_t                             flags;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t                             authentication_target;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AuthenticationTarget
        _m03 uint32_t                             number_of_authn_schemes;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfAuthnSchemes
        _m04 uint32_t*                            authn_schemes;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AuthnSchemes
        _m05 uint8_t*                             server_certificate_subject;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ServerCertificateSubject
                                                                             
        SDK_MAGIC_PROPERTIES( "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.$", 0x28, true, 0xccf5f86aa7bbfac1 );                           
        SDK_FIXED_SIZE( http_transport_credentials_a_t, 0x28 );                           
    };                                                                       
};
#include "magic/http_transport_credentials_a_t.end.hpp"
SDK_VERIFY( struct rpc::http_transport_credentials_a_t, 0x28 );
