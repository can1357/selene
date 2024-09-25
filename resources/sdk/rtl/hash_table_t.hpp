#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct single_list_entry_t; }

#include "magic/hash_table_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HASH_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hash_table_t                                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 uint32_t                        entry_count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntryCount
        _m01 uint5_t                         mask_bit_count;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .MaskBitCount
        _m02 uint27_t                        bucket_count;    //{ +0x0004@5  +0x0004@5  +0x0004@5  +0x0004@5  } | .BucketCount
        _m03 struct nt::single_list_entry_t* buckets;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buckets
                                                            
        SDK_MAGIC_PROPERTIES( "_RTL_HASH_TABLE.$", 0x10, true, 0xf1c13e1503d5f65f );               
        SDK_FIXED_SIZE( hash_table_t, 0x10 );               
    };                                                      
};
#include "magic/hash_table_t.end.hpp"
SDK_VERIFY( struct rtl::hash_table_t, 0x10 );
