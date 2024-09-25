#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_generic_error_section_validbits_t.hpp"

#include "magic/processor_generic_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_generic_error_section_t              
    {                                                     
        using valid_bits_t = union whea::processor_generic_error_section_validbits_t;                    
                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 valid_bits_t             valid_bits;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 uint8_t                  processor_type;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessorType
        _m02 uint8_t                  instruction_set;      //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .InstructionSet
        _m03 uint8_t                  error_type;           //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .ErrorType
        _m04 uint8_t                  operation;            //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Operation
        _m05 uint8_t                  flags;                //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m06 uint8_t                  level;                //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .Level
        _m07 uint64_t                 cpu_version;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CPUVersion
        _m08 sdk::array<uint8_t, 128> cpu_brand_string;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CPUBrandString
        _m09 uint64_t                 processor_id;         //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .ProcessorId
        _m10 uint64_t                 target_address;       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .TargetAddress
        _m11 uint64_t                 requester_id;         //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .RequesterId
        _m12 uint64_t                 responder_id;         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ResponderId
        _m13 uint64_t                 instruction_pointer;  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .InstructionPointer
                                                          
        SDK_NONVOL_PROPERTIES( "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.$", 0xc0, true, 0x76b7ec120b39cf74 );                    
        SDK_FIXED_SIZE( processor_generic_error_section_t, 0xc0 );                    
    };                                                    
};
#include "magic/processor_generic_error_section_t.end.hpp"
SDK_VERIFY( struct whea::processor_generic_error_section_t, 0xc0 );
