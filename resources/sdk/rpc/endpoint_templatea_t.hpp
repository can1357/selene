#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/endpoint_templatea_t.start.hpp"
namespace rpc
{
    // [struct RPC_ENDPOINT_TEMPLATEA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct endpoint_templatea_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t* prot_seq;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtSeq
        _m02 uint8_t* endpoint;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Endpoint
        _m03 void*    security_descriptor;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SecurityDescriptor
        _m04 uint32_t backlog;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Backlog
                                          
        SDK_MAGIC_PROPERTIES( "RPC_ENDPOINT_TEMPLATEA.$", 0x28, true, 0xa7d2331528182dba );                    
        SDK_FIXED_SIZE( endpoint_templatea_t, 0x28 );                    
    };                                    
};
#include "magic/endpoint_templatea_t.end.hpp"
SDK_VERIFY( struct rpc::endpoint_templatea_t, 0x28 );
