#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protseq_endpoint_t.start.hpp"
namespace rpc
{
    // [struct _RPC_PROTSEQ_ENDPOINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protseq_endpoint_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint8_t* rpc_protocol_sequence;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RpcProtocolSequence
        _m01 uint8_t* endpoint;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Endpoint
                                            
        SDK_MAGIC_PROPERTIES( "_RPC_PROTSEQ_ENDPOINT.$", 0x10, true, 0xf05bf2021d132252 );                      
        SDK_FIXED_SIZE( protseq_endpoint_t, 0x10 );                      
    };                                      
};
#include "magic/protseq_endpoint_t.end.hpp"
SDK_VERIFY( struct rpc::protseq_endpoint_t, 0x10 );
