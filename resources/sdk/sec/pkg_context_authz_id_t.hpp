#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_authz_id_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_AuthzID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_authz_id_t     
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t authz_id_length;  //{ +0x0000    +0x0000    +0x0000    } | .AuthzIDLength
        _m01 char*    authz_id;         //{ +0x0008    +0x0008    +0x0008    } | .AuthzID
                                      
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_AuthzID.$", 0x10, true, 0x60c50bbee474a3fa );                
        SDK_FIXED_SIZE( pkg_context_authz_id_t, 0x10 );                
    };                                
};
#include "magic/pkg_context_authz_id_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_authz_id_t, 0x10 );
