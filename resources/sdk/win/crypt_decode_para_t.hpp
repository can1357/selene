#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_decode_para_t.start.hpp"
namespace win
{
    // [struct _CRYPT_DECODE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_decode_para_t                         
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                             
        _m00 uint32_t                        cb_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 sdk::function<void*(uint64_t)>* pfn_alloc;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnAlloc
        _m02 sdk::function<void(void*)>*     pfn_free;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnFree
                                                       
        SDK_MAGIC_PROPERTIES( "_CRYPT_DECODE_PARA.$", 0x18, true, 0x35074e89e58f8bd2 );          
        SDK_FIXED_SIZE( crypt_decode_para_t, 0x18 );          
    };                                                 
};
#include "magic/crypt_decode_para_t.end.hpp"
SDK_VERIFY( struct win::crypt_decode_para_t, 0x18 );
