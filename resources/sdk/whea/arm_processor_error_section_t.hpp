#pragma once
#include <sdkgen/support_library.hpp>
#include "arm_processor_error_section_valid_bits_t.hpp"

#include "magic/arm_processor_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARM_PROCESSOR_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct arm_processor_error_section_t                           
    {                                                              
        using valid_bits_t = union whea::arm_processor_error_section_valid_bits_t;                               
                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                         
        _m00 valid_bits_t           valid_bits;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 uint16_t               error_information_structures;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ErrorInformationStructures
        _m02 uint16_t               context_information_structures;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .ContextInformationStructures
        _m03 uint32_t               section_length;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SectionLength
        _m04 uint8_t                error_affinity_level;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrorAffinityLevel
        _m05 uint64_t               mpidr_el1;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MPIDR_EL1
        _m06 uint64_t               midr_el1;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MIDR_EL1
        _m07 uint32_t               running_state;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .RunningState
        _m08 uint32_t               psci_state;                      //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .PSCIState
        _m09 sdk::array<uint8_t, 1> data;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Data
                                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR_SECTION.$", 0x29, true, 0xe47d81094c457f0e );                               
        SDK_FIXED_SIZE( arm_processor_error_section_t, 0x29 );                               
    };                                                             
};
#include "magic/arm_processor_error_section_t.end.hpp"
SDK_VERIFY( struct whea::arm_processor_error_section_t, 0x29 );
