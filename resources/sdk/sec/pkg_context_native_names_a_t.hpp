#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_native_names_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NativeNamesA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_native_names_a_t
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                       
        _m00 char* s_client_name;        //{ +0x0000    +0x0000    +0x0000    } | .sClientName
        _m01 char* s_server_name;        //{ +0x0008    +0x0008    +0x0008    } | .sServerName
                                       
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_NativeNamesA.$", 0x10, true, 0x2c49003d5fa862f6 );              
        SDK_FIXED_SIZE( pkg_context_native_names_a_t, 0x10 );              
    };                                 
};
#include "magic/pkg_context_native_names_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_native_names_a_t, 0x10 );
