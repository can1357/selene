#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_create_context_para_t.start.hpp"
namespace win
{
    // [struct _CERT_CREATE_CONTEXT_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_create_context_para_t                      
    {                                                      
        using pfn_cert_create_context_sort_func_t = sdk::function<int32_t(uint32_t, uint32_t, uint32_t, void*)>*;         
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                 
        _m00 uint32_t                             cb_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 sdk::function<void(void*)>*          pfn_free;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnFree
        _m02 void*                                pv_free;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvFree
        _m03 pfn_cert_create_context_sort_func_t  pfn_sort;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnSort
        _m04 void*                                pv_sort;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvSort
                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_CREATE_CONTEXT_PARA.$", 0x28, true, 0x94bec9b7f9d290ae );         
        SDK_FIXED_SIZE( cert_create_context_para_t, 0x28 );         
    };                                                     
};
#include "magic/cert_create_context_para_t.end.hpp"
SDK_VERIFY( struct win::cert_create_context_para_t, 0x28 );
