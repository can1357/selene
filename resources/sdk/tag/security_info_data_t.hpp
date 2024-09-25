#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct coauthidentity_t; }
namespace win { struct coserverinfo_t;   }

#include "magic/security_info_data_t.start.hpp"
namespace tag
{
    // [struct tagSecurityInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct security_info_data_t                                 
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 uint32_t                      dw_authn_flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwAuthnFlags
        _m01 struct win::coserverinfo_t*   p_server_info;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServerInfo
        _m02 struct win::coauthidentity_t* p_auth_identity_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pAuthIdentityInfo
                                                                
        SDK_MAGIC_PROPERTIES( "tagSecurityInfoData.$", 0x18, true, 0x321bd3a466862ccd );                     
        SDK_FIXED_SIZE( security_info_data_t, 0x18 );                     
    };                                                          
};
#include "magic/security_info_data_t.end.hpp"
SDK_VERIFY( struct tag::security_info_data_t, 0x18 );
