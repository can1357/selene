#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_ctx_call_t;       }
namespace win { class c_object_context_t; }
namespace win { class c_policy_set_t;     }

#include "magic/context_stack_node_t.start.hpp"
namespace tag
{
    struct context_stack_node_t;

    // [struct tagContextStackNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_stack_node_t                                 
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                      
        _m00 struct tag::context_stack_node_t* p_next;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 class win::c_object_context_t*    p_saved_context;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pSavedContext
        _m02 class win::c_object_context_t*    p_server_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pServerContext
        _m03 class win::c_ctx_call_t*          p_client_call;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pClientCall
        _m04 class win::c_ctx_call_t*          p_server_call;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pServerCall
        _m05 class win::c_policy_set_t*        p_ps;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pPS
                                                                
        SDK_MAGIC_PROPERTIES( "tagContextStackNode.$", 0x30, true, 0x3c42d47cfbe9a8b8 );                 
        SDK_FIXED_SIZE( context_stack_node_t, 0x30 );                 
    };                                                          
};
#include "magic/context_stack_node_t.end.hpp"
SDK_VERIFY( struct tag::context_stack_node_t, 0x30 );
