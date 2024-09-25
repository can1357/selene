#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_rpc_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_RPC_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_rpc_flags_t            
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 uint1_t idempotent;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Idempotent
        _m01 uint1_t broadcast;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Broadcast
        _m02 uint1_t maybe;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Maybe
        _m03 uint1_t has_guarantee;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .HasGuarantee
        _m04 uint1_t message;             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Message
        _m05 uint1_t input_synchronous;   //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .InputSynchronous
        _m06 uint1_t asynchronous;        //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Asynchronous
        _m07 uint1_t winrt_remote_async;  //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .WinrtRemoteAsync
                                        
        SDK_MAGIC_PROPERTIES( "_NDR64_RPC_FLAGS.$", 0x2, true, 0x9ef2acd1c2ca059 );                   
        SDK_FIXED_SIZE( ndr64_rpc_flags_t, 0x2 );                   
    };                                  
};
#include "magic/ndr64_rpc_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_rpc_flags_t, 0x2 );
