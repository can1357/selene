#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_tlb_error_valid_bits_t.start.hpp"
namespace whea
{
    // [union _WHEA_ARM_TLB_ERROR_VALID_BITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm_tlb_error_valid_bits_t            
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  transaction_type;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TransactionType
        _m01 uint1_t  operation;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Operation
        _m02 uint1_t  level;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Level
        _m03 uint1_t  processor_context_corrupt;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ProcessorContextCorrupt
        _m04 uint1_t  corrected;                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Corrected
        _m05 uint1_t  precise_pc;                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PrecisePC
        _m06 uint1_t  restartable_pc;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RestartablePC
        _m07 uint16_t as_ushort;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_TLB_ERROR_VALID_BITS.$", 0x2, true, 0x1146864ee6ec4f58 );                          
        SDK_FIXED_SIZE( arm_tlb_error_valid_bits_t, 0x2 );                          
    };                                          
};
#include "magic/arm_tlb_error_valid_bits_t.end.hpp"
SDK_VERIFY( union whea::arm_tlb_error_valid_bits_t, 0x2 );
