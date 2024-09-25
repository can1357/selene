#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_activator_t.start.hpp"
namespace wdf
{
    // [struct _AsActivator]
    // => Windows 11
    //
    struct as_activator_t
    {                    
        // Windows 11    
        //               
        _m00 uint32_t id;  //{ +0x0000    } | .Id
                         
        SDK_MAGIC_PROPERTIES( "_AsActivator.$", 0x0, false, 0xb6bf3fcc90c7f0e0 );   
        SDK_FIXED_SIZE( as_activator_t, 0x10 );   
    };                   
};
#include "magic/as_activator_t.end.hpp"
SDK_VERIFY( struct wdf::as_activator_t, 0x10 );
