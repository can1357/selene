#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dispatch_table_t.start.hpp"
namespace rpc
{
    struct message_t;

    // [struct RPC_DISPATCH_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dispatch_table_t                                                     
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                      
        _m00 uint32_t                                      dispatch_table_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DispatchTableCount
        _m01 sdk::function<void(struct rpc::message_t*)>** dispatch_table;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DispatchTable
                                                                                
        SDK_MAGIC_PROPERTIES( "RPC_DISPATCH_TABLE.$", 0x18, true, 0xa64b5ee5caa0969e );                     
        SDK_FIXED_SIZE( dispatch_table_t, 0x18 );                               
    };                                                                          
};
#include "magic/dispatch_table_t.end.hpp"
SDK_VERIFY( struct rpc::dispatch_table_t, 0x18 );
