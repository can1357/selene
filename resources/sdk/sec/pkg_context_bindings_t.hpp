#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_bindings_t.start.hpp"
namespace sec
{
    struct channel_bindings_t;

    // [struct _SecPkgContext_Bindings]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_bindings_t                            
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 uint32_t                        bindings_length;  //{ +0x0000    +0x0000    +0x0000    } | .BindingsLength
        _m01 struct sec::channel_bindings_t* bindings;         //{ +0x0008    +0x0008    +0x0008    } | .Bindings
                                                             
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_Bindings.$", 0x10, true, 0x3af2578ae523c336 );                
        SDK_FIXED_SIZE( pkg_context_bindings_t, 0x10 );                
    };                                                       
};
#include "magic/pkg_context_bindings_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_bindings_t, 0x10 );
