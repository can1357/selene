#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "../rtl/hp_env_handle_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/seg_context_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SEG_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct seg_context_t                                                            
    {                                                                               
        union u0_flags_t                                                            
        {                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
            //                                                                      
            _m06 uint3_t large_page_policy;                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .LargePagePolicy
            _m07 uint1_t full_decommit;                                               //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .FullDecommit
            _m08 uint1_t release_empty_segments;                                      //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .ReleaseEmptySegments
            _m09 uint8_t all_flags;                                                   //{ +0x0000    +0x0000    +0x0000    } | .AllFlags
                                                                                    
            // Windows 11                                                           
            //                                                                      
            _m10 uint1_t large_heap_first_segment;                                    //{ +0x0000@5  } | .LargeHeapFirstSegment
                                                                                    
            SDK_MAGIC_PROPERTIES( "_HEAP_SEG_CONTEXT.Flags.$", 0x1, true, 0x4dc83691b2fa1b26 );                                                  
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                                                  
        };                                                                          
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m00 uint64_t                                      segment_mask;              //{ +0x0000    +0x0000    +0x0000    } | .SegmentMask
        _m01 uint8_t                                       unit_shift;                //{ +0x0008    +0x0008    +0x0008    } | .UnitShift
        _m02 uint8_t                                       pages_per_unit_shift;      //{ +0x0009    +0x0009    +0x0009    } | .PagesPerUnitShift
        _m03 uint8_t                                       first_descriptor_index;    //{ +0x000a    +0x000a    +0x000a    } | .FirstDescriptorIndex
        _m04 uint8_t                                       cached_commit_soft_shift;  //{ +0x000b    +0x000b    +0x000b    } | .CachedCommitSoftShift
        _m05 uint8_t                                       cached_commit_high_shift;  //{ +0x000c    +0x000c    +0x000c    } | .CachedCommitHighShift
        _m11 u0_flags_t                                    flags;                     //{ +0x000d    +0x000d    +0x000d    } | .Flags
        _m12 uint32_t                                      max_allocation_size;       //{ +0x0010    +0x0010    +0x0010    } | .MaxAllocationSize
        _m13 int16_t                                       olp_stats_offset;          //{ +0x0014    +0x0014    +0x0014    } | .OlpStatsOffset
        _m14 int16_t                                       mem_stats_offset;          //{ +0x0016    +0x0016    +0x0016    } | .MemStatsOffset
        _m15 void*                                         lfh_context;               //{ +0x0018    +0x0018    +0x0018    } | .LfhContext
        _m16 void*                                         vs_context;                //{ +0x0020    +0x0020    +0x0020    } | .VsContext
        _m17 struct rtl::hp_env_handle_t                   env_handle;                //{ +0x0028    +0x0028    +0x0028    } | .EnvHandle
        _m18 void*                                         heap;                      //{ +0x0038    +0x0038    +0x0038    } | .Heap
        _m19 uint64_t                                      segment_lock;              //{ +0x0040    +0x0040    +0x0040    } | .SegmentLock
        _m20 nt::list_entry_t                              segment_list_head;         //{ +0x0048    +0x0048    +0x0048    } | .SegmentListHead
        _m21 uint64_t                                      segment_count;             //{ +0x0058    +0x0058    +0x0058    } | .SegmentCount
        _m22 struct rtl::rb_tree_t                         free_page_ranges;          //{ +0x0060    +0x0060    +0x0060    } | .FreePageRanges
        _m23 uint64_t                                      free_segment_list_lock;    //{ +0x0070    +0x0070    +0x0070    } | .FreeSegmentListLock
        _m24 sdk::array<struct nt::single_list_entry_t, 2> free_segment_list;         //{ +0x0078    +0x0078    +0x0078    } | .FreeSegmentList
                                                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_SEG_CONTEXT.$", 0xc0, true, 0x7aeb01c6c34ac29a );                         
        SDK_FIXED_SIZE( seg_context_t, 0xc0 );                                      
    };                                                                              
};
#include "magic/seg_context_t.end.hpp"
SDK_VERIFY( union heap::seg_context_t::u0_flags_t, 0x1 );
SDK_VERIFY( struct heap::seg_context_t, 0xc0 );
