#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_credential_name_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_CredentialNameA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_credential_name_a_t
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t credential_type;      //{ +0x0000    +0x0000    +0x0000    } | .CredentialType
        _m01 char*    s_credential_name;    //{ +0x0008    +0x0008    +0x0008    } | .sCredentialName
                                          
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_CredentialNameA.$", 0x10, true, 0xd5dc7cac673a0bde );                  
        SDK_FIXED_SIZE( pkg_context_credential_name_a_t, 0x10 );                  
    };                                    
};
#include "magic/pkg_context_credential_name_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_credential_name_a_t, 0x10 );
