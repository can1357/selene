#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_operation_type_t.hpp"

#include "magic/ndk_result_ex_t.start.hpp"
namespace ndis
{
    // [struct _NDK_RESULT_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_result_ex_t                                                   
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                   
        _m00 int32_t                         status;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 uint32_t                        bytes_transferred;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BytesTransferred
        _m02 void*                           qp_context;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QPContext
        _m03 void*                           request_context;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestContext
        _m04 enum ndis::ndk_operation_type_t type;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Type
        _m05 uint64_t                        type_specific_completion_output;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TypeSpecificCompletionOutput
                                                                             
        // Windows 11                                                        
        //                                                                   
        _m06 uint32_t                        provider_error_code;              //{ +0x001c    } | .ProviderErrorCode
                                                                             
        SDK_MAGIC_PROPERTIES( "_NDK_RESULT_EX.$", 0x28, true, 0xd4b72015f37b7238 );                                
        SDK_FIXED_SIZE( ndk_result_ex_t, 0x28 );                                
    };                                                                       
};
#include "magic/ndk_result_ex_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_result_ex_t, 0x28 );
