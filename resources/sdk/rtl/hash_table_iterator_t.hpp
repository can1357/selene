#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct single_list_entry_t; }

#include "magic/hash_table_iterator_t.start.hpp"
namespace rtl
{
    struct hash_entry_t;
    struct hash_table_t;

    // [struct _RTL_HASH_TABLE_ITERATOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hash_table_iterator_t                        
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                              
        _m00 struct rtl::hash_table_t*       hash;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hash
        _m01 struct rtl::hash_entry_t*       hash_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashEntry
        _m02 struct nt::single_list_entry_t* bucket;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Bucket
                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_HASH_TABLE_ITERATOR.$", 0x18, true, 0xbf2a4f1c12795aa6 );           
        SDK_FIXED_SIZE( hash_table_iterator_t, 0x18 );           
    };                                                  
};
#include "magic/hash_table_iterator_t.end.hpp"
SDK_VERIFY( struct rtl::hash_table_iterator_t, 0x18 );
