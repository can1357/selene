#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_subsegment_stat_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_SUBSEGMENT_STAT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_subsegment_stat_t
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 uint8_t index;       //{ +0x0000    +0x0000    +0x0000    } | .Index
        _m01 uint8_t count;       //{ +0x0001    +0x0001    +0x0001    } | .Count
                                
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT_STAT.$", 0x2, true, 0x7173b45a701f25d8 );      
        SDK_FIXED_SIZE( lfh_subsegment_stat_t, 0x2 );      
    };                          
};
#include "magic/lfh_subsegment_stat_t.end.hpp"
SDK_VERIFY( struct heap::lfh_subsegment_stat_t, 0x2 );
