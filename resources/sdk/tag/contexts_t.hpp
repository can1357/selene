#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_object_context_t; }

#include "magic/contexts_t.start.hpp"
namespace tag
{
    // [struct tagContexts]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct contexts_t                                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 class win::c_object_context_t* p_client_ctx;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pClientCtx
        _m01 class win::c_object_context_t* p_server_ctx;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServerCtx
                                                         
        SDK_MAGIC_PROPERTIES( "tagContexts.$", 0x10, true, 0xc3fadb0be9cd5ae9 );             
        SDK_FIXED_SIZE( contexts_t, 0x10 );              
    };                                                   
};
#include "magic/contexts_t.end.hpp"
SDK_VERIFY( struct tag::contexts_t, 0x10 );
