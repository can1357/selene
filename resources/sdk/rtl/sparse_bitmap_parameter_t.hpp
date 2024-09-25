#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sparse_bitmap_parameter_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SPARSE_BITMAP_PARAMETER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sparse_bitmap_parameter_t                               
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m00 uint64_t                        bit_count_max;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BitCountMax
        _m01 uint32_t                        metadata_size_per_bit;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MetadataSizePerBit
        _m02 uint32_t                        bits_per_range;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BitsPerRange
        _m03 uint32_t                        range_count_max;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RangeCountMax
        _m04 sdk::function<void*(uint64_t)>* allocate_routine;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocateRoutine
        _m05 sdk::function<void(void*)>*     free_routine;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeRoutine
        _m06 uint1_t                         default_bits_set;       //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .DefaultBitsSet
        _m07 uint1_t                         sparse_range_array;     //{ +0x0028@1  +0x0028@1  +0x0028@1  +0x0028@1  } | .SparseRangeArray
        _m08 uint1_t                         no_internal_locking;    //{ +0x0028@2  +0x0028@2  +0x0028@2  +0x0028@2  } | .NoInternalLocking
        _m09 uint29_t                        spare_flags;            //{ +0x0028@3  +0x0028@3  +0x0028@3  +0x0028@3  } | .SpareFlags
                                                                   
        SDK_MAGIC_PROPERTIES( "_RTL_SPARSE_BITMAP_PARAMETER.$", 0x30, true, 0xf9fb334905fb174e );                      
        SDK_FIXED_SIZE( sparse_bitmap_parameter_t, 0x30 );                      
    };                                                             
};
#include "magic/sparse_bitmap_parameter_t.end.hpp"
SDK_VERIFY( struct rtl::sparse_bitmap_parameter_t, 0x30 );
