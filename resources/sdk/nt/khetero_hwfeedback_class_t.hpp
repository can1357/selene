#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/khetero_hwfeedback_class_t.start.hpp"
namespace nt
{
    // [struct _KHETERO_HWFEEDBACK_CLASS]
    // => Windows 11
    //
    struct khetero_hwfeedback_class_t            
    {                                            
        // Windows 11                            
        //                                       
        _m00 uint8_t performance_class;            //{ +0x0000    } | .PerformanceClass
        _m01 uint8_t efficiency_class;             //{ +0x0001    } | .EfficiencyClass
        _m02 uint8_t performance_class_raw_value;  //{ +0x0002    } | .PerformanceClassRawValue
        _m03 uint8_t efficiency_class_raw_value;   //{ +0x0003    } | .EfficiencyClassRawValue
                                                 
        SDK_MAGIC_PROPERTIES( "_KHETERO_HWFEEDBACK_CLASS.$", 0x0, false, 0x5797d6b4a83bfd3d );                            
        SDK_FIXED_SIZE( khetero_hwfeedback_class_t, 0x4 );                            
    };                                           
};
#include "magic/khetero_hwfeedback_class_t.end.hpp"
SDK_VERIFY( struct nt::khetero_hwfeedback_class_t, 0x4 );
