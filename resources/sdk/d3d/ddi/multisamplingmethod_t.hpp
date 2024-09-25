#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multisamplingmethod_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_MULTISAMPLINGMETHOD]
    // => WDK 10 (NV)
    //
    struct multisamplingmethod_t         
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t num_samples;         //{ +0x0000    } | .NumSamples
        _m01 uint32_t num_quality_levels;  //{ +0x0004    } | .NumQualityLevels
                                         
        SDK_NONVOL_PROPERTIES( "_D3DDDI_MULTISAMPLINGMETHOD.$", 0x0, false, 0xfa90207051968b40 );                   
        SDK_FIXED_SIZE( multisamplingmethod_t, 0x8 );                   
    };                                   
};
#include "magic/multisamplingmethod_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::multisamplingmethod_t, 0x8 );
