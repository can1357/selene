#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_password_expiry_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_PasswordExpiry]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_password_expiry_t 
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 int64_t ts_password_expires;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tsPasswordExpires
                                         
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_PasswordExpiry.$", 0x8, true, 0xf4ad974a7931885f );                    
        SDK_FIXED_SIZE( pkg_context_password_expiry_t, 0x8 );                    
    };                                   
};
#include "magic/pkg_context_password_expiry_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_password_expiry_t, 0x8 );
