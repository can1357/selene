#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kthread_t; }

#include "magic/verifier_thread_table_entry_t.start.hpp"
namespace fx
{
    class verifier_lock_t;

    // [struct FxVerifierThreadTableEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_thread_table_entry_t                              
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                            
        _m00 struct nt::kthread_t*      thread;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 class fx::verifier_lock_t* per_thread_passive_lock_list;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PerThreadPassiveLockList
        _m02 class fx::verifier_lock_t* per_thread_dispatch_lock_list;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PerThreadDispatchLockList
        _m03 nt::list_entry_t           hash_chain;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HashChain
                                                                      
        SDK_MAGIC_PROPERTIES( "FxVerifierThreadTableEntry.$", 0x28, true, 0x92772a666c6eccdf );                              
        SDK_FIXED_SIZE( verifier_thread_table_entry_t, 0x28 );                              
    };                                                                
};
#include "magic/verifier_thread_table_entry_t.end.hpp"
SDK_VERIFY( struct fx::verifier_thread_table_entry_t, 0x28 );
