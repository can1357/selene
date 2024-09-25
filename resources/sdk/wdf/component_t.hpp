#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/component_t.start.hpp"
namespace wdf
{
    // [struct _Component]
    // => Windows 11
    //
    struct component_t          
    {                           
        // Windows 11           
        //                      
        _m00 uint32_t signature;  //{ +0x0000    } | .Signature
        _m01 uint32_t id;         //{ +0x0004    } | .Id
                                
        SDK_MAGIC_PROPERTIES( "_Component.$", 0x0, false, 0x15afb136a5f6b8e1 );          
        SDK_FIXED_SIZE( component_t, 0x8 );          
    };                          
};
#include "magic/component_t.end.hpp"
SDK_VERIFY( struct wdf::component_t, 0x8 );
