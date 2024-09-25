#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_target_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_Target]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_target_t     
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t target_length;  //{ +0x0000    +0x0000    +0x0000    } | .TargetLength
        _m01 char*    target;         //{ +0x0008    +0x0008    +0x0008    } | .Target
                                    
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_Target.$", 0x10, true, 0x88185386dca17756 );              
        SDK_FIXED_SIZE( pkg_context_target_t, 0x10 );              
    };                              
};
#include "magic/pkg_context_target_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_target_t, 0x10 );
