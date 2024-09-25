#pragma once
#include <sdkgen/support_library.hpp>
#include "information_t.hpp"
#include "block_information_t.hpp"
#include "range_information_t.hpp"
#include "region_information_t.hpp"
#include "../win/process_heap_information_t.hpp"
#include "performance_counters_information_t.hpp"

#include "magic/information_item_t.start.hpp"
namespace heap
{
    // [struct _HEAP_INFORMATION_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct information_item_t                                                         
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                            
        _m00 uint32_t                                        level;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
        _m01 uint64_t                                        size;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 struct win::process_heap_information_t          process_heap_information;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessHeapInformation
        _m03 struct heap::information_t                      heap_information;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapInformation
        _m04 struct heap::region_information_t               heap_region_information;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapRegionInformation
        _m05 struct heap::range_information_t                heap_range_information;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapRangeInformation
        _m06 struct heap::block_information_t                heap_block_information;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapBlockInformation
        _m07 struct heap::performance_counters_information_t heap_perf_information;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapPerfInformation
        _m08 uint64_t                                        dynamic_start;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DynamicStart
                                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_INFORMATION_ITEM.$", 0xa8, true, 0xea6c2b13d5819aba );                         
        SDK_FIXED_SIZE( information_item_t, 0xa8 );                                   
    };                                                                                
};
#include "magic/information_item_t.end.hpp"
SDK_VERIFY( struct heap::information_item_t, 0xa8 );
