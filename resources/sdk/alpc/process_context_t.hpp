#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/process_context_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_PROCESS_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_context_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 struct ex::push_lock_t lock;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 nt::list_entry_t       view_list_head;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ViewListHead
        _m02 volatile uint64_t      paged_pool_quota_cache;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PagedPoolQuotaCache
                                                           
        SDK_MAGIC_PROPERTIES( "_ALPC_PROCESS_CONTEXT.$", 0x20, true, 0xbe6af2780eb75c9f );                       
        SDK_FIXED_SIZE( process_context_t, 0x20 );                       
    };                                                     
};
#include "magic/process_context_t.end.hpp"
SDK_VERIFY( struct alpc::process_context_t, 0x20 );
