#pragma once
#include <sdkgen/support_library.hpp>
#include "refcount_tagged_t.hpp"
#include "refcount_with_stack_t.hpp"

#include "magic/refcount_block_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_REFCOUNT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_block_t                                             
    {                                                                   
        using ref_with_stack_t = sdk::array<struct ndis::refcount_with_stack_t, 1>;                            
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 uint8_t                        flags;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint8_t                        type;                         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Type
        _m02 uint8_t                        num_ref_tags;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NumRefTags
        _m03 uint8_t                        num_overflow_tagged_entries;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .NumOverflowTaggedEntries
        _m04 struct ndis::refcount_tagged_t tagged_ref_counts;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TaggedRefCounts
        _m05 ref_with_stack_t               ref_with_stack;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefWithStack
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_REFCOUNT_BLOCK.$", 0x48, true, 0xa624e78940c5770a );                            
        SDK_FIXED_SIZE( refcount_block_t, 0x48 );                            
    };                                                                  
};
#include "magic/refcount_block_t.end.hpp"
SDK_VERIFY( struct ndis::refcount_block_t, 0x48 );
