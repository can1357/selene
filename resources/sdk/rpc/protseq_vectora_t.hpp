#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protseq_vectora_t.start.hpp"
namespace rpc
{
    // [struct _RPC_PROTSEQ_VECTORA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protseq_vectora_t                 
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                count;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<uint8_t*, 1> protseq;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Protseq
                                             
        SDK_MAGIC_PROPERTIES( "_RPC_PROTSEQ_VECTORA.$", 0x10, true, 0xd3865baf60edbeae );        
        SDK_FIXED_SIZE( protseq_vectora_t, 0x10 );        
    };                                       
};
#include "magic/protseq_vectora_t.end.hpp"
SDK_VERIFY( struct rpc::protseq_vectora_t, 0x10 );
