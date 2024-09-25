#pragma once
#include <sdkgen/support_library.hpp>
#include "c_verifier_stack_data_t.hpp"

#include "magic/c_verifier_tls_data_t.start.hpp"
namespace win
{
    // [class CVerifierTlsData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_verifier_tls_data_t                                                    
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                         
        _m00 class win::c_verifier_stack_data_t stack_com_init;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .stackComInit
        _m01 class win::c_verifier_stack_data_t stack_com_uninit;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .stackComUninit
        _m02 class win::c_verifier_stack_data_t stack_ole_init;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .stackOLEInit
        _m03 class win::c_verifier_stack_data_t stack_ole_uninit;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .stackOLEUninit
        _m04 class win::c_verifier_stack_data_t stack_enter_swc;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .stackEnterSWC
        _m05 class win::c_verifier_stack_data_t stack_leave_swc;                     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .stackLeaveSWC
        _m06 uint64_t                           aggressive_dll_unload_ticks_in_sta;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .AggressiveDllUnloadTicksInSTA
                                                                                   
        SDK_MAGIC_PROPERTIES( "CVerifierTlsData.$", 0x98, true, 0xdba66ee4adf56c5d );                                   
        SDK_FIXED_SIZE( c_verifier_tls_data_t, 0x98 );                                   
    };                                                                             
};
#include "magic/c_verifier_tls_data_t.end.hpp"
SDK_VERIFY( class win::c_verifier_tls_data_t, 0x98 );
