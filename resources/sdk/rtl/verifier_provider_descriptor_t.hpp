#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_provider_descriptor_t.start.hpp"
namespace rtl
{
    struct verifier_dll_descriptor_t;

    // [struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_provider_descriptor_t                                             
    {                                                                                 
        using provider_dll_load_callback_t =   sdk::function<void(wchar_t*, void*, uint64_t, void*)>*;                                  
        using provider_dll_unload_callback_t = sdk::function<void(wchar_t*, void*, uint64_t, void*)>*;                                  
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                            
        _m00 uint32_t                               length;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 struct rtl::verifier_dll_descriptor_t* provider_dlls;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProviderDlls
        _m02 provider_dll_load_callback_t           provider_dll_load_callback;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProviderDllLoadCallback
        _m03 provider_dll_unload_callback_t         provider_dll_unload_callback;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProviderDllUnloadCallback
        _m04 wchar_t*                               verifier_image;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VerifierImage
        _m05 uint32_t                               verifier_flags;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VerifierFlags
        _m06 uint32_t                               verifier_debug;                     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .VerifierDebug
        _m07 void*                                  rtlp_get_stack_trace_address;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RtlpGetStackTraceAddress
        _m08 void*                                  rtlp_debug_page_heap_create;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RtlpDebugPageHeapCreate
        _m09 void*                                  rtlp_debug_page_heap_destroy;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RtlpDebugPageHeapDestroy
        _m10 sdk::function<void(void*, uint64_t)>*  provider_ntdll_heap_free_callback;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ProviderNtdllHeapFreeCallback
                                                                                      
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_PROVIDER_DESCRIPTOR.$", 0x50, true, 0x171ed8893ae53cef );                                  
        SDK_FIXED_SIZE( verifier_provider_descriptor_t, 0x50 );                                  
    };                                                                                
};
#include "magic/verifier_provider_descriptor_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_provider_descriptor_t, 0x50 );
