#pragma once
#include <sdkgen/support_library.hpp>
#include "page_range_descriptor_t.hpp"

#include "magic/page_segment_t.start.hpp"
namespace heap
{
    union segment_mgr_commit_state_t;

    // [union _HEAP_PAGE_SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union page_segment_t                                                  
    {                                                                     
        using desc_array_t = sdk::array<struct heap::page_range_descriptor_t, 256>;                     
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 nt::list_entry_t                        list_entry;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint64_t                                signature;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Signature
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m02 union heap::segment_mgr_commit_state_t* segment_commit_state;  //{ +0x0018    +0x0018    +0x0018    } | .SegmentCommitState
        _m03 uint8_t                                 unused_watermark;      //{ +0x0020    +0x0020    +0x0020    } | .UnusedWatermark
        _m04 desc_array_t                            desc_array;            //{ +0x0000    +0x0000    +0x0000    } | .DescArray
                                                                          
        SDK_MAGIC_PROPERTIES( "_HEAP_PAGE_SEGMENT.$", 0x2000, true, 0x4d38d3c87db803d4 );                     
        SDK_DYNAMIC_SIZE( page_segment_t );                               
    };                                                                    
};
#include "magic/page_segment_t.end.hpp"
