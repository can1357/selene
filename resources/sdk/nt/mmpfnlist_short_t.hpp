#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpfnlist_short_t.start.hpp"
namespace nt
{
    // [struct _MMPFNLIST_SHORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct mmpfnlist_short_t
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2      
        //                  
        _m00 uint64_t total;  //{ +0x0000    +0x0000    +0x0000    } | .Total
        _m01 uint64_t flink;  //{ +0x0008    +0x0008    +0x0008    } | .Flink
        _m02 uint64_t blink;  //{ +0x0010    +0x0010    +0x0010    } | .Blink
                            
        SDK_MAGIC_PROPERTIES( "_MMPFNLIST_SHORT.$", 0x18, true, 0x616608b45eb0cca0 );      
        SDK_FIXED_SIZE( mmpfnlist_short_t, 0x18 );      
    };                      
};
#include "magic/mmpfnlist_short_t.end.hpp"
SDK_VERIFY( struct nt::mmpfnlist_short_t, 0x18 );
