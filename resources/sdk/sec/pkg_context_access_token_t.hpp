#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_access_token_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_AccessToken]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_access_token_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                      
        _m00 void* access_token;       //{ +0x0000    +0x0000    +0x0000    } | .AccessToken
                                     
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_AccessToken.$", 0x8, true, 0x6f8b409db19ed902 );             
        SDK_FIXED_SIZE( pkg_context_access_token_t, 0x8 );             
    };                               
};
#include "magic/pkg_context_access_token_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_access_token_t, 0x8 );
