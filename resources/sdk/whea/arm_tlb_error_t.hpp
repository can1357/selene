#pragma once
#include <sdkgen/support_library.hpp>
#include "arm_tlb_error_valid_bits_t.hpp"

#include "magic/arm_tlb_error_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_TLB_ERROR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_tlb_error_t                                                    
    {                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                    
        _m00 union whea::arm_tlb_error_valid_bits_t validation_bit;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidationBit
        _m01 uint2_t                                transaction_type;           //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .TransactionType
        _m02 uint4_t                                operation;                  //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .Operation
        _m03 uint3_t                                level;                      //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .Level
        _m04 uint1_t                                processor_context_corrupt;  //{ +0x0003@3  +0x0003@3  +0x0003@3  +0x0003@3  +0x0003@3  } | .ProcessorContextCorrupt
        _m05 uint1_t                                corrected;                  //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .Corrected
        _m06 uint1_t                                precise_pc;                 //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .PrecisePC
        _m07 uint1_t                                restartable_pc;             //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .RestartablePC
                                                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_TLB_ERROR.$", 0xc, true, 0x4fa7f844d01283fc );                          
        SDK_FIXED_SIZE( arm_tlb_error_t, 0xc );                               
    };                                                                        
};
#include "magic/arm_tlb_error_t.end.hpp"
SDK_VERIFY( struct whea::arm_tlb_error_t, 0xc );
