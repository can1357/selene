#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_credential_name_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_CredentialNameW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_credential_name_w_t
    {                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t credential_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CredentialType
        _m01 wchar_t* s_credential_name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .sCredentialName
                                          
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_CredentialNameW.$", 0x10, true, 0xa4ec7ce9419a427e );                  
        SDK_FIXED_SIZE( pkg_context_credential_name_w_t, 0x10 );                  
    };                                    
};
#include "magic/pkg_context_credential_name_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_credential_name_w_t, 0x10 );
