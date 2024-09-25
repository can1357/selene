#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/slist_header_t.hpp"

namespace nt { struct ethread_t; }

#include "magic/stack_trace_block_t.start.hpp"
namespace etw
{
    struct apc_entry_t;

    // [struct _ETW_STACK_TRACE_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_block_t                                  
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                      
        _m00 int64_t                  related_timestamp;          //{ +0x0000    +0x0000    +0x0000    } | .RelatedTimestamp
        _m01 struct nt::ethread_t*    thread;                     //{ +0x0008    +0x0008    +0x0008    } | .Thread
        _m02 struct nt::kdpc_t        stack_walk_dpc;             //{ +0x0010    +0x0010    +0x0010    } | .StackWalkDpc
        _m03 int32_t                  flags;                      //{ +0x006c    +0x008c    +0x006c    } | .Flags
        _m04 int32_t                  apc_count;                  //{ +0x0070    +0x0080    +0x0070    } | .ApcCount
                                                                
        // Windows 10 v2004, Windows 10 v20H2                          
        //                                                      
        _m05 union nt::slist_header_t apc_list_head;              //{ +0x0050    +0x0050    } | .ApcListHead
        _m06 struct etw::apc_entry_t* apc_entry;                  //{ +0x0060    +0x0060    } | .ApcEntry
        _m07 uint32_t                 apc_entry_count;            //{ +0x0068    +0x0068    } | .ApcEntryCount
        _m08 int32_t                  max_apc_count;              //{ +0x0074    +0x0074    } | .MaxApcCount
                                                                
        // Windows 11                                           
        //                                                      
        _m09 uint64_t                 apc_spin_lock;              //{ +0x0050    } | .ApcSpinLock
        _m10 union nt::slist_header_t apc_free_list_head;         //{ +0x0060    } | .ApcFreeListHead
        _m11 union nt::slist_header_t apc_global_list_head;       //{ +0x0070    } | .ApcGlobalListHead
        _m12 uint32_t                 minimum_apc_count;          //{ +0x0084    } | .MinimumApcCount
        _m13 uint32_t                 maximum_apc_count;          //{ +0x0088    } | .MaximumApcCount
        _m14 int32_t                  outstanding_apc_count;      //{ +0x0090    } | .OutstandingApcCount
        _m15 int32_t                  max_outstanding_apc_count;  //{ +0x0094    } | .MaxOutstandingApcCount
                                                                
        SDK_MAGIC_PROPERTIES( "_ETW_STACK_TRACE_BLOCK.$", 0x80, true, 0x509aa1fe27b0914f );                          
        SDK_DYNAMIC_SIZE( stack_trace_block_t );                          
    };                                                          
};
#include "magic/stack_trace_block_t.end.hpp"
