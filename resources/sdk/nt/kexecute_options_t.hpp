#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kexecute_options_t.start.hpp"
namespace nt
{
    // [union _KEXECUTE_OPTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kexecute_options_t                                     
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                       
        _m00 volatile uint1_t execute_disable;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ExecuteDisable
        _m01 volatile uint1_t execute_enable;                      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ExecuteEnable
        _m02 volatile uint1_t disable_thunk_emulation;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DisableThunkEmulation
        _m03 volatile uint1_t permanent;                           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Permanent
        _m04 volatile uint1_t execute_dispatch_enable;             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ExecuteDispatchEnable
        _m05 volatile uint1_t image_dispatch_enable;               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ImageDispatchEnable
        _m06 volatile uint1_t disable_exception_chain_validation;  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .DisableExceptionChainValidation
        _m07 volatile uint8_t execute_options;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExecuteOptions
        _m08 uint8_t          execute_options_nv;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExecuteOptionsNV
                                                                 
        SDK_MAGIC_PROPERTIES( "_KEXECUTE_OPTIONS.$", 0x1, true, 0xc9588e7f62e54a22 );                                   
        SDK_FIXED_SIZE( kexecute_options_t, 0x1 );                                   
    };                                                           
};
#include "magic/kexecute_options_t.end.hpp"
SDK_VERIFY( union nt::kexecute_options_t, 0x1 );
