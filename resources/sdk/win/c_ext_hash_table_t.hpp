#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_ext_hash_table_t.start.hpp"
namespace win
{
    class crw_lock_t;
    struct s_hash_chain_t;
    class c_ole_static_mutex_sem_t;

    // [class CExtHashTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ext_hash_table_t                                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 class win::c_ole_static_mutex_sem_t* p_ex_lock;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pExLock
        _m01 class win::crw_lock_t*               p_rw_lock;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pRWLock
        _m02 struct win::s_hash_chain_t*          buckets;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._buckets
        _m03 uint32_t                             c_cur_entries;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._cCurEntries
        _m04 uint32_t                             c_max_entries;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._cMaxEntries
                                                                
        SDK_MAGIC_PROPERTIES( "CExtHashTable.$", 0x28, true, 0x6b330425cfa21650 );              
        SDK_FIXED_SIZE( c_ext_hash_table_t, 0x28 );              
    };                                                          
};
#include "magic/c_ext_hash_table_t.end.hpp"
SDK_VERIFY( class win::c_ext_hash_table_t, 0x28 );
