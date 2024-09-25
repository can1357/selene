#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace rtl { struct dynamic_hash_table_t; }

#include "magic/cached_handles_table_t.start.hpp"
namespace sep
{
    // [struct _SEP_CACHED_HANDLES_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_handles_table_t                         
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 struct ex::push_lock_t            lock;        //{ +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct rtl::dynamic_hash_table_t* hash_table;  //{ +0x0008    +0x0008    +0x0008    } | .HashTable
                                                          
        SDK_MAGIC_PROPERTIES( "_SEP_CACHED_HANDLES_TABLE.$", 0x10, true, 0x5c96523a46854af4 );           
        SDK_FIXED_SIZE( cached_handles_table_t, 0x10 );           
    };                                                    
};
#include "magic/cached_handles_table_t.end.hpp"
SDK_VERIFY( struct sep::cached_handles_table_t, 0x10 );
