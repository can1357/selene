#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_ms_check_t.start.hpp"
namespace whea
{
    // [union _WHEA_XPF_MS_CHECK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union xpf_ms_check_t                              
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  error_type_valid;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorTypeValid
        _m01 uint1_t  processor_context_corrupt_valid;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ProcessorContextCorruptValid
        _m02 uint1_t  uncorrected_valid;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .UncorrectedValid
        _m03 uint1_t  precise_ip_valid;                 //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PreciseIPValid
        _m04 uint1_t  restartable_ip_valid;             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RestartableIPValid
        _m05 uint1_t  overflow_valid;                   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .OverflowValid
        _m06 uint10_t reserved_value;                   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .ReservedValue
        _m07 uint3_t  error_type;                       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ErrorType
        _m08 uint1_t  processor_context_corrupt;        //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .ProcessorContextCorrupt
        _m09 uint1_t  uncorrected;                      //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .Uncorrected
        _m10 uint1_t  precise_ip;                       //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .PreciseIP
        _m11 uint1_t  restartable_ip;                   //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .RestartableIP
        _m12 uint1_t  overflow;                         //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .Overflow
        _m13 uint64_t xpf_ms_check;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .XpfMsCheck
                                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_MS_CHECK.$", 0x8, true, 0x776fa04498d29195 );                                
        SDK_FIXED_SIZE( xpf_ms_check_t, 0x8 );                                
    };                                                
};
#include "magic/xpf_ms_check_t.end.hpp"
SDK_VERIFY( union whea::xpf_ms_check_t, 0x8 );
