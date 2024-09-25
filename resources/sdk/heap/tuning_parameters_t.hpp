#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tuning_parameters_t.start.hpp"
namespace heap
{
    // [struct _HEAP_TUNING_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tuning_parameters_t                  
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t committ_threshold_shift;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommittThresholdShift
        _m01 uint64_t max_pre_committ_threshold;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxPreCommittThreshold
                                                
        SDK_MAGIC_PROPERTIES( "_HEAP_TUNING_PARAMETERS.$", 0x10, true, 0xa70b867bf3dd5dd6 );                          
        SDK_FIXED_SIZE( tuning_parameters_t, 0x10 );                          
    };                                          
};
#include "magic/tuning_parameters_t.end.hpp"
SDK_VERIFY( struct heap::tuning_parameters_t, 0x10 );
