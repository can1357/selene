#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_nit_range_t.hpp"

#include "magic/brightness_nit_ranges_t.start.hpp"
namespace nt
{
    // [struct BRIGHTNESS_NIT_RANGES]
    // => WDK 10 (NV)
    //
    struct brightness_nit_ranges_t                            
    {                                                         
        using supported_ranges_t = sdk::array<struct nt::brightness_nit_range_t, 16>;                             
                                                              
        // WDK 10                                             
        //                                                    
        _m00 uint32_t            normal_range_count;            //{ +0x0000    } | .NormalRangeCount
        _m01 uint32_t            range_count;                   //{ +0x0004    } | .RangeCount
        _m02 uint32_t            preferred_maximum_brightness;  //{ +0x0008    } | .PreferredMaximumBrightness
        _m03 supported_ranges_t  supported_ranges;              //{ +0x000c    } | .SupportedRanges
                                                              
        SDK_NONVOL_PROPERTIES( "BRIGHTNESS_NIT_RANGES.$", 0x0, false, 0xa984a6ecac63078a );                             
        SDK_FIXED_SIZE( brightness_nit_ranges_t, 0xcc );                             
    };                                                        
};
#include "magic/brightness_nit_ranges_t.end.hpp"
SDK_VERIFY( struct nt::brightness_nit_ranges_t, 0xcc );
