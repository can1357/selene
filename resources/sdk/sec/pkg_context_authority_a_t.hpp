#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_authority_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_AuthorityA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_authority_a_t
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                          
        _m00 char* s_authority_name;  //{ +0x0000    +0x0000    +0x0000    } | .sAuthorityName
                                    
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_AuthorityA.$", 0x8, true, 0xbac3886ad32e25d );                 
        SDK_FIXED_SIZE( pkg_context_authority_a_t, 0x8 );                 
    };                              
};
#include "magic/pkg_context_authority_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_authority_a_t, 0x8 );
