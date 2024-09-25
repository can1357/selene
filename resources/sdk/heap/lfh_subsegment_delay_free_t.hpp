#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_subsegment_delay_free_t.start.hpp"
namespace heap
{
    // [union _HEAP_LFH_SUBSEGMENT_DELAY_FREE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union lfh_subsegment_delay_free_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint1_t  delay_free;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DelayFree
        _m01 uint63_t count;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Count
        _m02 void*    all_bits;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllBits
                                     
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT_DELAY_FREE.$", 0x8, true, 0x97fa2a6440bd836f );           
        SDK_FIXED_SIZE( lfh_subsegment_delay_free_t, 0x8 );           
    };                               
};
#include "magic/lfh_subsegment_delay_free_t.end.hpp"
SDK_VERIFY( union heap::lfh_subsegment_delay_free_t, 0x8 );
