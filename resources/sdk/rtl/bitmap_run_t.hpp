#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmap_run_t.start.hpp"
namespace rtl
{
    // [struct _RTL_BITMAP_RUN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmap_run_t              
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t starting_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingIndex
        _m01 uint32_t number_of_bits;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfBits
                                     
        SDK_NONVOL_PROPERTIES( "_RTL_BITMAP_RUN.$", 0x8, true, 0x786421d4f578bb56 );               
        SDK_FIXED_SIZE( bitmap_run_t, 0x8 );               
    };                               
};
#include "magic/bitmap_run_t.end.hpp"
SDK_VERIFY( struct rtl::bitmap_run_t, 0x8 );
