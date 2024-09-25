#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_processor_error_section_valid_bits_t.start.hpp"
namespace whea
{
    // [union _WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm_processor_error_section_valid_bits_t
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint1_t  mpidr;                        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MPIDR
        _m01 uint1_t  affinity_level;               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AffinityLevel
        _m02 uint1_t  running_state;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .RunningState
        _m03 uint1_t  vendor_specific_info;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .VendorSpecificInfo
        _m04 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS.$", 0x4, true, 0xa22cd2cfb3de6d5f );                     
        SDK_FIXED_SIZE( arm_processor_error_section_valid_bits_t, 0x4 );                     
    };                                            
};
#include "magic/arm_processor_error_section_valid_bits_t.end.hpp"
SDK_VERIFY( union whea::arm_processor_error_section_valid_bits_t, 0x4 );
