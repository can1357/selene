#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_fault_injections_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_fault_injections_information_t             
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m00 uint32_t                  size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint8_t                   initialized;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Initialized
        _m02 sdk::array<uint32_t, 16>  fault_probability;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FaultProbability
        _m03 sdk::array<uint32_t, 16>  fault_break;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FaultBreak
        _m04 uint32_t                  target_maximum_index;     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .TargetMaximumIndex
        _m05 sdk::array<uint64_t, 128> fault_target_start;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .FaultTargetStart
        _m06 sdk::array<uint64_t, 128> fault_target_end;         //{ +0x0490    +0x0490    +0x0490    +0x0490    } | .FaultTargetEnd
        _m07 uint32_t                  exclusion_maximum_index;  //{ +0x0890    +0x0890    +0x0890    +0x0890    } | .ExclusionMaximumIndex
        _m08 sdk::array<uint64_t, 128> fault_exclusion_start;    //{ +0x0898    +0x0898    +0x0898    +0x0898    } | .FaultExclusionStart
        _m09 sdk::array<uint64_t, 128> fault_exclusion_end;      //{ +0x0c98    +0x0c98    +0x0c98    +0x0c98    } | .FaultExclusionEnd
                                                               
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.$", 0x1098, true, 0xda3f8645df6f4f2d );                        
        SDK_FIXED_SIZE( verifier_fault_injections_information_t, 0x1098 );                        
    };                                                         
};
#include "magic/verifier_fault_injections_information_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_fault_injections_information_t, 0x1098 );
