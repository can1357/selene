#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coauthinfo_t.start.hpp"
namespace win
{
    struct coauthidentity_t;

    // [struct _COAUTHINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coauthinfo_t                                           
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m00 uint32_t                      dw_authn_svc;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwAuthnSvc
        _m01 uint32_t                      dw_authz_svc;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwAuthzSvc
        _m02 wchar_t*                      pwsz_server_princ_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszServerPrincName
        _m03 uint32_t                      dw_authn_level;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwAuthnLevel
        _m04 uint32_t                      dw_impersonation_level;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwImpersonationLevel
        _m05 struct win::coauthidentity_t* p_auth_identity_data;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pAuthIdentityData
        _m06 uint32_t                      dw_capabilities;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwCapabilities
                                                                  
        SDK_MAGIC_PROPERTIES( "_COAUTHINFO.$", 0x28, true, 0xf2e0bb73328cae5b );                       
        SDK_FIXED_SIZE( coauthinfo_t, 0x28 );                       
    };                                                            
};
#include "magic/coauthinfo_t.end.hpp"
SDK_VERIFY( struct win::coauthinfo_t, 0x28 );
