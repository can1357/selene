#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_credentials_names_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgCredentials_NamesW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_credentials_names_w_t
    {                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 wchar_t* s_user_name;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sUserName
                                    
        SDK_NONVOL_PROPERTIES( "_SecPkgCredentials_NamesW.$", 0x8, true, 0x78a6bf5edb1d9f7b );            
        SDK_FIXED_SIZE( pkg_credentials_names_w_t, 0x8 );            
    };                              
};
#include "magic/pkg_credentials_names_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_credentials_names_w_t, 0x8 );
