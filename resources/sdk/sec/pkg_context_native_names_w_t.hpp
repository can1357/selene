#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_native_names_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NativeNamesW]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_native_names_w_t
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 wchar_t* s_client_name;     //{ +0x0000    +0x0000    +0x0000    } | .sClientName
        _m01 wchar_t* s_server_name;     //{ +0x0008    +0x0008    +0x0008    } | .sServerName
                                       
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_NativeNamesW.$", 0x10, true, 0x811650d0a86767b9 );              
        SDK_FIXED_SIZE( pkg_context_native_names_w_t, 0x10 );              
    };                                 
};
#include "magic/pkg_context_native_names_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_native_names_w_t, 0x10 );
