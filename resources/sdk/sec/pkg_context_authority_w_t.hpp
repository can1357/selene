#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_authority_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_AuthorityW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_authority_w_t   
    {                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 wchar_t* s_authority_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sAuthorityName
                                       
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_AuthorityW.$", 0x8, true, 0xe0531f8b1d62247d );                 
        SDK_FIXED_SIZE( pkg_context_authority_w_t, 0x8 );                 
    };                                 
};
#include "magic/pkg_context_authority_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_authority_w_t, 0x8 );
