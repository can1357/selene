#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_provider_helper_table_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_PROVIDER_HELPER_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_provider_helper_table_t                                                    
    {                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                     
        _m00 uint32_t                                  length;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::function<void*(uint32_t)>*           verifier_eng_log_stack_trace;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VerifierEngLogStackTrace
        _m02 sdk::function<void(void*)>*               verifier_eng_release_stack_trace;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VerifierEngReleaseStackTrace
        _m03 sdk::function<void*(uint16_t, uint16_t)>* verifier_eng_get_stack_trace_address_ex;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VerifierEngGetStackTraceAddressEx
        _m04 sdk::function<void(void*)>*               verifier_eng_set_heap_path_caller;        //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .VerifierEngSetHeapPathCaller
                                                                                               
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_PROVIDER_HELPER_TABLE.$", 0xf8, true, 0x371ff297c32727cb );                                        
        SDK_FIXED_SIZE( verifier_provider_helper_table_t, 0xf8 );                                        
    };                                                                                         
};
#include "magic/verifier_provider_helper_table_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_provider_helper_table_t, 0xf8 );
