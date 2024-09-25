#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multisamplemethod_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTISAMPLEMETHOD]
    // => WDK 10 (NV)
    //
    struct multisamplemethod_t           
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t num_samples;         //{ +0x0000    } | .NumSamples
        _m01 uint32_t num_quality_levels;  //{ +0x0004    } | .NumQualityLevels
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTISAMPLEMETHOD.$", 0x0, false, 0xc4c6aad631feb146 );                   
        SDK_FIXED_SIZE( multisamplemethod_t, 0xc );                   
    };                                   
};
#include "magic/multisamplemethod_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multisamplemethod_t, 0xc );
