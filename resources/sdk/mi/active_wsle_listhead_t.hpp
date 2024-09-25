#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/active_wsle_listhead_t.start.hpp"
namespace mi
{
    // [struct _MI_ACTIVE_WSLE_LISTHEAD]
    // => Windows 10 v1607
    //
    struct active_wsle_listhead_t
    {                            
        // Windows 10 v1607      
        //                  
        _m00 uint64_t flink;       //{ +0x0000    } | .Flink
        _m01 uint64_t blink;       //{ +0x0008    } | .Blink
                                 
        SDK_MAGIC_PROPERTIES( "_MI_ACTIVE_WSLE_LISTHEAD.$", 0x0, false, 0x191519cc653be9d0 );      
        SDK_FIXED_SIZE( active_wsle_listhead_t, 0x10 );      
    };                           
};
#include "magic/active_wsle_listhead_t.end.hpp"
SDK_VERIFY( struct mi::active_wsle_listhead_t, 0x10 );
