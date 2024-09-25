#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_hash_table_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DYNAMIC_HASH_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dynamic_hash_table_t         
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t shift;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Shift
        _m02 uint32_t table_size;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TableSize
        _m03 uint32_t pivot;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Pivot
        _m04 uint32_t divisor_mask;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DivisorMask
        _m05 uint32_t num_entries;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .NumEntries
        _m06 uint32_t non_empty_buckets;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .NonEmptyBuckets
        _m07 uint32_t num_enumerators;    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .NumEnumerators
        _m08 void*    directory;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Directory
                                        
        SDK_NONVOL_PROPERTIES( "_RTL_DYNAMIC_HASH_TABLE.$", 0x28, true, 0xdc42f7e4f783e8eb );                  
        SDK_FIXED_SIZE( dynamic_hash_table_t, 0x28 );                  
    };                                  
};
#include "magic/dynamic_hash_table_t.end.hpp"
SDK_VERIFY( struct rtl::dynamic_hash_table_t, 0x28 );
