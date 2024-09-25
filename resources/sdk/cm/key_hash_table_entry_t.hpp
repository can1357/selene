#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/key_hash_table_entry_t.start.hpp"
namespace cm
{
    struct key_hash_t;

    // [struct _CM_KEY_HASH_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_hash_table_entry_t         
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 struct ex::push_lock_t lock;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct nt::kthread_t*  owner;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Owner
        _m02 struct cm::key_hash_t* entry;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Entry
                                          
        SDK_MAGIC_PROPERTIES( "_CM_KEY_HASH_TABLE_ENTRY.$", 0x18, true, 0xb57036a9703008c1 );      
        SDK_FIXED_SIZE( key_hash_table_entry_t, 0x18 );      
    };                                    
};
#include "magic/key_hash_table_entry_t.end.hpp"
SDK_VERIFY( struct cm::key_hash_table_entry_t, 0x18 );
