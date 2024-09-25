#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_t.hpp"
#include "node_header_t.hpp"

namespace nt { struct eprocess_t; }
namespace nt { struct kevent_t;   }

#include "magic/process_context_t.start.hpp"
namespace wnf
{
    // [struct _WNF_PROCESS_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_context_t                                          
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                            
        _m00 struct wnf::node_header_t header;                          //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct nt::eprocess_t*    process;                         //{ +0x0008    +0x0008    +0x0008    } | .Process
        _m02 nt::list_entry_t          wnf_processes_list_entry;        //{ +0x0010    +0x0010    +0x0010    } | .WnfProcessesListEntry
        _m03 sdk::array<void*, 3>      implicit_scope_instances;        //{ +0x0020    +0x0020    +0x0020    } | .ImplicitScopeInstances
        _m04 struct wnf::lock_t        temporary_names_list_lock;       //{ +0x0038    +0x0038    +0x0038    } | .TemporaryNamesListLock
        _m05 nt::list_entry_t          temporary_names_list_head;       //{ +0x0040    +0x0040    +0x0040    } | .TemporaryNamesListHead
        _m06 struct wnf::lock_t        process_subscription_list_lock;  //{ +0x0050    +0x0050    +0x0050    } | .ProcessSubscriptionListLock
        _m07 nt::list_entry_t          process_subscription_list_head;  //{ +0x0058    +0x0058    +0x0058    } | .ProcessSubscriptionListHead
        _m08 struct wnf::lock_t        delivery_pending_list_lock;      //{ +0x0068    +0x0068    +0x0068    } | .DeliveryPendingListLock
        _m09 nt::list_entry_t          delivery_pending_list_head;      //{ +0x0070    +0x0070    +0x0070    } | .DeliveryPendingListHead
        _m10 struct nt::kevent_t*      notification_event;              //{ +0x0080    +0x0080    +0x0080    } | .NotificationEvent
                                                                      
        SDK_MAGIC_PROPERTIES( "_WNF_PROCESS_CONTEXT.$", 0x88, true, 0x91f54ad7ed79f0de );                               
        SDK_FIXED_SIZE( process_context_t, 0x88 );                               
    };                                                                
};
#include "magic/process_context_t.end.hpp"
SDK_VERIFY( struct wnf::process_context_t, 0x88 );
