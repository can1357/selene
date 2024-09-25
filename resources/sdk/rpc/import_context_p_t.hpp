#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/import_context_p_t.start.hpp"
namespace rpc
{
    struct binding_vector_t;

    // [struct RPC_IMPORT_CONTEXT_P]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct import_context_p_t                              
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                 
        _m00 void*                         lookup_context;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LookupContext
        _m01 void*                         proposed_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProposedHandle
        _m02 struct rpc::binding_vector_t* bindings;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Bindings
                                                           
        SDK_MAGIC_PROPERTIES( "RPC_IMPORT_CONTEXT_P.$", 0x18, true, 0xdd564164111973d );                
        SDK_FIXED_SIZE( import_context_p_t, 0x18 );                
    };                                                     
};
#include "magic/import_context_p_t.end.hpp"
SDK_VERIFY( struct rpc::import_context_p_t, 0x18 );
