#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sole_authentication_info_t.start.hpp"
namespace tag
{
    // [struct tagSOLE_AUTHENTICATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sole_authentication_info_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t dw_authn_svc;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwAuthnSvc
        _m01 uint32_t dw_authz_svc;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwAuthzSvc
        _m02 void*    p_auth_info;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAuthInfo
                                     
        SDK_MAGIC_PROPERTIES( "tagSOLE_AUTHENTICATION_INFO.$", 0x10, true, 0x557e3823489b44f6 );             
        SDK_FIXED_SIZE( sole_authentication_info_t, 0x10 );             
    };                               
};
#include "magic/sole_authentication_info_t.end.hpp"
SDK_VERIFY( struct tag::sole_authentication_info_t, 0x10 );
