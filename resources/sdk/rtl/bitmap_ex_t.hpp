#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmap_ex_t.start.hpp"
namespace rtl
{
    // [struct _RTL_BITMAP_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmap_ex_t                 
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint64_t  size_of_bit_map;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeOfBitMap
        _m01 uint64_t* buffer;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                       
        SDK_NONVOL_PROPERTIES( "_RTL_BITMAP_EX.$", 0x10, true, 0xf92718d6466930d9 );                
        SDK_FIXED_SIZE( bitmap_ex_t, 0x10 );                
    };                                 
};
#include "magic/bitmap_ex_t.end.hpp"
SDK_VERIFY( struct rtl::bitmap_ex_t, 0x10 );
