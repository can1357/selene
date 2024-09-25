#pragma once
#include <sdkgen/support_library.hpp>
#include "dynamic_hash_table_entry_t.hpp"

#include "magic/dynamic_hash_table_enumerator_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dynamic_hash_table_enumerator_t                       
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                       
        _m00 struct rtl::dynamic_hash_table_entry_t hash_entry;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .HashEntry
        _m01 nt::list_entry_t*                      cur_entry;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CurEntry
        _m02 nt::list_entry_t*                      chain_head;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ChainHead
        _m03 uint32_t                               bucket_index;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .BucketIndex
                                                                 
        SDK_NONVOL_PROPERTIES( "_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR.$", 0x28, true, 0xd3b3161eddcb8522 );             
        SDK_FIXED_SIZE( dynamic_hash_table_enumerator_t, 0x28 );             
    };                                                           
};
#include "magic/dynamic_hash_table_enumerator_t.end.hpp"
SDK_VERIFY( struct rtl::dynamic_hash_table_enumerator_t, 0x28 );
