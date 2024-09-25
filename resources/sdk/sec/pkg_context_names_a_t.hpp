#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_names_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NamesA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_names_a_t
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                     
        _m00 char* s_user_name;   //{ +0x0000    +0x0000    +0x0000    } | .sUserName
                                
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_NamesA.$", 0x8, true, 0x95214c0287d2d6e );            
        SDK_FIXED_SIZE( pkg_context_names_a_t, 0x8 );            
    };                          
};
#include "magic/pkg_context_names_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_names_a_t, 0x8 );
