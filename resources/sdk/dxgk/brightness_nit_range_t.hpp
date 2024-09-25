#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_nit_range_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_NIT_RANGE]
    // => WDK 10 (NV)
    //
    struct brightness_nit_range_t            
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t minimum_level_millinit;  //{ +0x0000    } | .MinimumLevelMillinit
        _m01 uint32_t maximum_level_millinit;  //{ +0x0004    } | .MaximumLevelMillinit
        _m02 uint32_t step_size_millinit;      //{ +0x0008    } | .StepSizeMillinit
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_NIT_RANGE.$", 0x0, false, 0x2cd41c21c96d7b2 );                       
        SDK_FIXED_SIZE( brightness_nit_range_t, 0xc );                       
    };                                       
};
#include "magic/brightness_nit_range_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_nit_range_t, 0xc );
