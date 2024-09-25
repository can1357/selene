#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_client_specified_target_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_ClientSpecifiedTarget]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_client_specified_target_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 wchar_t* s_target_name;              //{ +0x0000    +0x0000    +0x0000    } | .sTargetName
                                                
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_ClientSpecifiedTarget.$", 0x8, true, 0xd756c415e07bcaad );              
        SDK_FIXED_SIZE( pkg_context_client_specified_target_t, 0x8 );              
    };                                          
};
#include "magic/pkg_context_client_specified_target_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_client_specified_target_t, 0x8 );
