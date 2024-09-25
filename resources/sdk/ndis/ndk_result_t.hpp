#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_result_t.start.hpp"
namespace ndis
{
    // [struct _NDK_RESULT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_result_t                 
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 int32_t  status;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 uint32_t bytes_transferred;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BytesTransferred
        _m02 void*    qp_context;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QPContext
        _m03 void*    request_context;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestContext
                                        
        SDK_MAGIC_PROPERTIES( "_NDK_RESULT.$", 0x18, true, 0xae24d99612de73fd );                  
        SDK_FIXED_SIZE( ndk_result_t, 0x18 );                  
    };                                  
};
#include "magic/ndk_result_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_result_t, 0x18 );
