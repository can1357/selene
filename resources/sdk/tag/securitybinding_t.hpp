#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/securitybinding_t.start.hpp"
namespace tag
{
    // [struct tagSECURITYBINDING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct securitybinding_t       
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t w_authn_svc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wAuthnSvc
        _m01 uint16_t w_authz_svc;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wAuthzSvc
        _m02 uint16_t a_princ_name;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .aPrincName
                                   
        SDK_MAGIC_PROPERTIES( "tagSECURITYBINDING.$", 0x6, true, 0xb9df8f594675bc6e );             
        SDK_FIXED_SIZE( securitybinding_t, 0x6 );             
    };                             
};
#include "magic/securitybinding_t.end.hpp"
SDK_VERIFY( struct tag::securitybinding_t, 0x6 );
