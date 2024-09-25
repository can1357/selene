#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sole_authentication_service_t.start.hpp"
namespace tag
{
    // [struct tagSOLE_AUTHENTICATION_SERVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sole_authentication_service_t   
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                 
        _m00 uint32_t     dw_authn_svc;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwAuthnSvc
        _m01 uint32_t     dw_authz_svc;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwAuthzSvc
        _m02 wchar_t*     p_principal_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPrincipalName
        _m03 sdk::hresult hr;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hr
                                           
        SDK_MAGIC_PROPERTIES( "tagSOLE_AUTHENTICATION_SERVICE.$", 0x18, true, 0x520f0e2029001c21 );                 
        SDK_FIXED_SIZE( sole_authentication_service_t, 0x18 );                 
    };                                     
};
#include "magic/sole_authentication_service_t.end.hpp"
SDK_VERIFY( struct tag::sole_authentication_service_t, 0x18 );
