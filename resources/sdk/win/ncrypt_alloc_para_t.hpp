#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_alloc_para_t.start.hpp"
namespace win
{
    // [struct NCRYPT_ALLOC_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_alloc_para_t                         
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                             
        _m00 uint32_t                        cb_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 sdk::function<void*(uint64_t)>* pfn_alloc;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnAlloc
        _m02 sdk::function<void(void*)>*     pfn_free;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnFree
                                                       
        SDK_MAGIC_PROPERTIES( "NCRYPT_ALLOC_PARA.$", 0x18, true, 0x76a5f9c3e8227ca1 );          
        SDK_FIXED_SIZE( ncrypt_alloc_para_t, 0x18 );          
    };                                                 
};
#include "magic/ncrypt_alloc_para_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_alloc_para_t, 0x18 );
