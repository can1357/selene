#pragma once
#include <sdkgen/support_library.hpp>
#include "bitmap_t.hpp"

#include "magic/sparse_bitmap_ctx_t.start.hpp"
namespace rtl
{
    struct sparse_bitmap_range_t;

    // [struct _RTL_SPARSE_BITMAP_CTX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sparse_bitmap_ctx_t                                             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                 
        _m00 uint64_t                            lock;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct rtl::sparse_bitmap_range_t** bitmap_ranges;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BitmapRanges
        _m02 struct rtl::bitmap_t                range_array_commit_status;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RangeArrayCommitStatus
        _m03 sdk::function<void*(uint64_t)>*     allocate_routine;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AllocateRoutine
        _m04 sdk::function<void(void*)>*         free_routine;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeRoutine
        _m05 uint32_t                            range_count;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RangeCount
        _m06 uint32_t                            range_index_limit;          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .RangeIndexLimit
        _m07 uint32_t                            bits_per_range;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BitsPerRange
        _m08 uint32_t                            range_count_max;            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .RangeCountMax
        _m09 uint32_t                            range_metadata_offset;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RangeMetadataOffset
        _m10 uint32_t                            metadata_size_per_bit;      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MetadataSizePerBit
        _m11 uint1_t                             default_bits_set;           //{ +0x0048@0  +0x0048@0  +0x0048@0  +0x0048@0  } | .DefaultBitsSet
        _m12 uint1_t                             sparse_range_array;         //{ +0x0048@1  +0x0048@1  +0x0048@1  +0x0048@1  } | .SparseRangeArray
        _m13 uint1_t                             no_internal_locking;        //{ +0x0048@2  +0x0048@2  +0x0048@2  +0x0048@2  } | .NoInternalLocking
        _m14 uint29_t                            spare_flags;                //{ +0x0048@3  +0x0048@3  +0x0048@3  +0x0048@3  } | .SpareFlags
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_SPARSE_BITMAP_CTX.$", 0x50, true, 0x2887c68b82292762 );                          
        SDK_FIXED_SIZE( sparse_bitmap_ctx_t, 0x50 );                          
    };                                                                     
};
#include "magic/sparse_bitmap_ctx_t.end.hpp"
SDK_VERIFY( struct rtl::sparse_bitmap_ctx_t, 0x50 );
