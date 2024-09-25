#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/dynamic_hash_table_entry_t.hpp"

#include "magic/luid_to_index_map_entry_t.start.hpp"
namespace sep
{
    // [struct _SEP_LUID_TO_INDEX_MAP_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct luid_to_index_map_entry_t                                                  
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                            
        _m00 struct rtl::dynamic_hash_table_entry_t hash_entry;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashEntry
        _m01 int64_t                                reference_count;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReferenceCount
        _m02 uint64_t                               luid;                               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Luid
        _m03 uint64_t                               index_into_global_singleton_table;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IndexIntoGlobalSingletonTable
        _m04 uint8_t                                marked_for_deletion;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MarkedForDeletion
                                                                                      
        SDK_MAGIC_PROPERTIES( "_SEP_LUID_TO_INDEX_MAP_ENTRY.$", 0x38, true, 0x91204f39c6543782 );                                  
        SDK_FIXED_SIZE( luid_to_index_map_entry_t, 0x38 );                                  
    };                                                                                
};
#include "magic/luid_to_index_map_entry_t.end.hpp"
SDK_VERIFY( struct sep::luid_to_index_map_entry_t, 0x38 );
