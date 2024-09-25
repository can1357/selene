#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_feature_t.start.hpp"
namespace hal
{
    // [struct _HAL_PROCESSOR_FEATURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_feature_t            
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t usable_feature_bits;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UsableFeatureBits
                                          
        SDK_NONVOL_PROPERTIES( "_HAL_PROCESSOR_FEATURE.$", 0x4, true, 0x3eb0ea5125107b8c );                    
        SDK_FIXED_SIZE( processor_feature_t, 0x4 );                    
    };                                    
};
#include "magic/processor_feature_t.end.hpp"
SDK_VERIFY( struct hal::processor_feature_t, 0x4 );
