#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_processor_error_context_information_header_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm_processor_error_context_information_header_flags_t
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint1_t  exception_level;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ExceptionLevel
        _m01 uint1_t  non_secure;                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NonSecure
        _m02 uint1_t  a_arch64;                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AArch64
        _m03 uint32_t as_ulong;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS.$", 0x4, true, 0xe755eb3295f9ab06 );                
        SDK_FIXED_SIZE( arm_processor_error_context_information_header_flags_t, 0x4 );                
    };                                                          
};
#include "magic/arm_processor_error_context_information_header_flags_t.end.hpp"
SDK_VERIFY( union whea::arm_processor_error_context_information_header_flags_t, 0x4 );
