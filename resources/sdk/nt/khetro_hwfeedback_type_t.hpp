#pragma once
#include <sdkgen/support_library.hpp>
#include "khetero_hwfeedback_class_t.hpp"

#include "magic/khetro_hwfeedback_type_t.start.hpp"
namespace nt
{
    // [struct _KHETRO_HWFEEDBACK_TYPE]
    // => Windows 11
    //
    struct khetro_hwfeedback_type_t                 
    {                                               
        using hw_feedback_class_t = sdk::array<struct nt::khetero_hwfeedback_class_t, 1>;                  
                                                    
        // Windows 11                               
        //                                          
        _m00 uint32_t             count;              //{ +0x0000    } | .Count
        _m01 hw_feedback_class_t  hw_feedback_class;  //{ +0x0004    } | .HwFeedbackClass
                                                    
        SDK_MAGIC_PROPERTIES( "_KHETRO_HWFEEDBACK_TYPE.$", 0x0, false, 0x1390288de3772c99 );                  
        SDK_FIXED_SIZE( khetro_hwfeedback_type_t, 0x8 );                  
    };                                              
};
#include "magic/khetro_hwfeedback_type_t.end.hpp"
SDK_VERIFY( struct nt::khetro_hwfeedback_type_t, 0x8 );
