#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/async_delegate_storage_t.start.hpp"
namespace win
{
    // [class AsyncDelegateStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class async_delegate_storage_t                        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                
        _m00 void*   bucket_assist;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._bucketAssist
        _m01 uint1_t delegate_is_agile;                     //{ +0x0020@0  +0x0020@0  +0x0020@0  +0x0020@0  } | ._delegateIsAgile
        _m02 uint1_t is_proxy_to_outofproc_progress_thunk;  //{ +0x0020@1  +0x0020@1  +0x0020@1  +0x0020@1  } | ._isProxyToOutofprocProgressThunk
        _m03 uint1_t is_placeholder;                        //{ +0x0020@2  +0x0020@2  +0x0020@2  +0x0020@2  } | ._isPlaceholder
                                                          
        SDK_MAGIC_PROPERTIES( "AsyncDelegateStorage.$", 0x28, true, 0xf178c6f12ff86a1b );                                     
        SDK_FIXED_SIZE( async_delegate_storage_t, 0x28 );                                     
    };                                                    
};
#include "magic/async_delegate_storage_t.end.hpp"
SDK_VERIFY( class win::async_delegate_storage_t, 0x28 );
