#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_async_retrieval_completion_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ASYNC_RETRIEVAL_COMPLETION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_async_retrieval_completion_t                            
    {                                                                    
        using pfn_crypt_async_retrieval_completion_func_t = sdk::function<void(void*, uint32_t, const char*, char*, void*)>*;               
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                               
        _m00 pfn_crypt_async_retrieval_completion_func_t  pfn_completion;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnCompletion
        _m01 void*                                        pv_completion;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvCompletion
                                                                         
        SDK_MAGIC_PROPERTIES( "_CRYPT_ASYNC_RETRIEVAL_COMPLETION.$", 0x10, true, 0xdff674610b65a09e );               
        SDK_FIXED_SIZE( crypt_async_retrieval_completion_t, 0x10 );               
    };                                                                   
};
#include "magic/crypt_async_retrieval_completion_t.end.hpp"
SDK_VERIFY( struct win::crypt_async_retrieval_completion_t, 0x10 );
