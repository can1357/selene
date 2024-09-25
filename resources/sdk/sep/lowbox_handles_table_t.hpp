#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace rtl { struct dynamic_hash_table_t; }

#include "magic/lowbox_handles_table_t.start.hpp"
namespace sep
{
    // [struct _SEP_LOWBOX_HANDLES_TABLE]
    // => Windows 10 v1607
    //
    struct lowbox_handles_table_t                         
    {                                                     
        // Windows 10 v1607                               
        //                                                
        _m00 struct ex::push_lock_t            lock;        //{ +0x0000    } | .Lock
        _m01 struct rtl::dynamic_hash_table_t* hash_table;  //{ +0x0008    } | .HashTable
                                                          
        SDK_MAGIC_PROPERTIES( "_SEP_LOWBOX_HANDLES_TABLE.$", 0x0, false, 0x7ed4df9944c57895 );           
        SDK_FIXED_SIZE( lowbox_handles_table_t, 0x10 );           
    };                                                    
};
#include "magic/lowbox_handles_table_t.end.hpp"
SDK_VERIFY( struct sep::lowbox_handles_table_t, 0x10 );
