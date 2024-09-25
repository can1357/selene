#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/component_filter_t.start.hpp"
namespace win
{
    // [struct _COMPONENT_FILTER]
    // => Windows 11
    //
    struct component_filter_t         
    {                                 
        // Windows 11                 
        //                            
        _m00 uint32_t component_flags;  //{ +0x0000    } | .ComponentFlags
                                      
        SDK_MAGIC_PROPERTIES( "_COMPONENT_FILTER.$", 0x0, false, 0x1bf730e621ef6f29 );                
        SDK_FIXED_SIZE( component_filter_t, 0x4 );                
    };                                
};
#include "magic/component_filter_t.end.hpp"
SDK_VERIFY( struct win::component_filter_t, 0x4 );
