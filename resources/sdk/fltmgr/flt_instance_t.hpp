#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_object_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "context_list_ctrl_t.hpp"
#include "flt_instance_flags_t.hpp"
#include "../ex/push_lock_auto_expand_t.hpp"

namespace ex { struct rundown_ref_cache_aware_t; }

#include "magic/flt_instance_t.start.hpp"
namespace fltmgr
{
    struct flt_filter_t;
    struct flt_volume_t;
    struct context_node_t;
    struct callback_node_t;
    struct track_completion_nodes_t;

    // [struct _FLT_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_instance_t                                                           
    {                                                                               
        using context_lock_t = sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;                       
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                          
        _m00 struct fltmgr::flt_object_t                     base;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m01 struct ex::rundown_ref_cache_aware_t*           operation_rundown_ref;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OperationRundownRef
        _m02 struct fltmgr::flt_volume_t*                    volume;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Volume
        _m03 struct fltmgr::flt_filter_t*                    filter;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Filter
        _m04 enum fltmgr::flt_instance_flags_t               flags;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Flags
        _m05 nt::unicode_view                                altitude;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Altitude
        _m06 nt::unicode_view                                name;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Name
        _m07 nt::list_entry_t                                filter_link;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .FilterLink
        _m08 context_lock_t                                  context_lock;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ContextLock
        _m09 struct fltmgr::context_node_t*                  context;                 //{ +0x0088    +0x0088    +0x0090    +0x0088    } | .Context
        _m10 struct fltmgr::context_list_ctrl_t              transaction_contexts;    //{ +0x0090    +0x0090    +0x0098    +0x0090    } | .TransactionContexts
        _m11 struct fltmgr::track_completion_nodes_t*        track_completion_nodes;  //{ +0x0098    +0x0098    +0x00a0    +0x0098    } | .TrackCompletionNodes
        _m12 sdk::array<struct fltmgr::callback_node_t*, 50> callback_nodes;          //{ +0x00a0    +0x00a0    +0x00a8    +0x00a0    } | .CallbackNodes
                                                                                    
        SDK_MAGIC_PROPERTIES( "_FLT_INSTANCE.$", 0x230, true, 0xe39aa4779afd7293 );                       
        SDK_DYNAMIC_SIZE( flt_instance_t );                                         
    };                                                                              
};
#include "magic/flt_instance_t.end.hpp"
