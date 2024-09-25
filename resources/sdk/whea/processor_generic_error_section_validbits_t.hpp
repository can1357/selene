#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_generic_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union processor_generic_error_section_validbits_t
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint1_t  processor_type;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ProcessorType
        _m01 uint1_t  instruction_set;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .InstructionSet
        _m02 uint1_t  error_type;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ErrorType
        _m03 uint1_t  operation;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Operation
        _m04 uint1_t  flags;                           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Flags
        _m05 uint1_t  level;                           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Level
        _m06 uint1_t  cpu_version;                     //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .CPUVersion
        _m07 uint1_t  cpu_brand_string;                //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .CPUBrandString
        _m08 uint1_t  processor_id;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ProcessorId
        _m09 uint1_t  target_address;                  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TargetAddress
        _m10 uint1_t  requester_id;                    //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .RequesterId
        _m11 uint1_t  responder_id;                    //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .ResponderId
        _m12 uint1_t  instruction_pointer;             //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .InstructionPointer
        _m13 uint64_t valid_bits;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                                     
        // Windows 11                     
        //                                
        _m14 uint1_t  native_model_id;                 //{ +0x0000@13 } | .NativeModelId
                                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0x78a1462e8787afec );                    
        SDK_FIXED_SIZE( processor_generic_error_section_validbits_t, 0x8 );                    
    };                                               
};
#include "magic/processor_generic_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::processor_generic_error_section_validbits_t, 0x8 );
