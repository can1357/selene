#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kaffinity_ex_t.start.hpp"
namespace nt
{
    // [struct _KAFFINITY_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kaffinity_ex_t                           
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 uint16_t                 count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint16_t                 size;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 sdk::array<uint64_t, 20> bitmap;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Bitmap
                                                    
        // Windows 11                               
        //                                          
        _m03 sdk::array<uint64_t, 32> static_bitmap;  //{ +0x0008    } | .StaticBitmap
                                                    
        SDK_NONVOL_PROPERTIES( "_KAFFINITY_EX.$", 0xa8, true, 0x49e104d18cdb37a4 );              
        SDK_DYNAMIC_SIZE( kaffinity_ex_t );              
    };                                              
};
#include "magic/kaffinity_ex_t.end.hpp"
