#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_t.hpp"

namespace nt { struct heap_t; }

#include "magic/segment_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_t                                                  
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                            
        _m00 struct heap::entry_t  entry;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 uint32_t              segment_signature;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SegmentSignature
        _m02 uint32_t              segment_flags;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SegmentFlags
        _m03 nt::list_entry_t      segment_list_entry;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SegmentListEntry
        _m04 struct nt::heap_t*    heap;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Heap
        _m05 void*                 base_address;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BaseAddress
        _m06 uint32_t              number_of_pages;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NumberOfPages
        _m07 struct heap::entry_t* first_entry;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FirstEntry
        _m08 struct heap::entry_t* last_valid_entry;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LastValidEntry
        _m09 uint32_t              number_of_un_committed_pages;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NumberOfUnCommittedPages
        _m10 uint32_t              number_of_un_committed_ranges;       //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .NumberOfUnCommittedRanges
        _m11 uint16_t              segment_allocator_back_trace_index;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SegmentAllocatorBackTraceIndex
        _m12 nt::list_entry_t      ucr_segment_list;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UCRSegmentList
                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_SEGMENT.$", 0x70, true, 0xf150f9eddb42fbbc );                                   
        SDK_FIXED_SIZE( segment_t, 0x70 );                                   
    };                                                                
};
#include "magic/segment_t.end.hpp"
SDK_VERIFY( struct heap::segment_t, 0x70 );
