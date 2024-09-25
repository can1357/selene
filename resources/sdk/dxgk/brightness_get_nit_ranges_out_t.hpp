#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_nit_range_t.hpp"

#include "magic/brightness_get_nit_ranges_out_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT]
    // => WDK 10 (NV)
    //
    struct brightness_get_nit_ranges_out_t                    
    {                                                         
        using supported_ranges_t = sdk::array<struct dxgk::brightness_nit_range_t, 16>;                             
                                                              
        // WDK 10                                             
        //                                                    
        _m00 uint32_t            normal_range_count;            //{ +0x0000    } | .NormalRangeCount
        _m01 uint32_t            range_count;                   //{ +0x0004    } | .RangeCount
        _m02 uint32_t            preferred_maximum_brightness;  //{ +0x0008    } | .PreferredMaximumBrightness
        _m03 supported_ranges_t  supported_ranges;              //{ +0x000c    } | .SupportedRanges
                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT.$", 0x0, false, 0xf2cc3b42d8b653a9 );                             
        SDK_FIXED_SIZE( brightness_get_nit_ranges_out_t, 0xcc );                             
    };                                                        
};
#include "magic/brightness_get_nit_ranges_out_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_get_nit_ranges_out_t, 0xcc );
