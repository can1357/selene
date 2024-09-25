#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_nit_range_t.start.hpp"
namespace nt
{
    // [struct _BRIGHTNESS_NIT_RANGE]
    // => WDK 10 (NV)
    //
    struct brightness_nit_range_t           
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t min_level_in_millinit;  //{ +0x0000    } | .MinLevelInMillinit
        _m01 uint32_t max_level_in_millinit;  //{ +0x0004    } | .MaxLevelInMillinit
        _m02 uint32_t step_size_in_millinit;  //{ +0x0008    } | .StepSizeInMillinit
                                            
        SDK_NONVOL_PROPERTIES( "_BRIGHTNESS_NIT_RANGE.$", 0x0, false, 0x118c53a593498d16 );                      
        SDK_FIXED_SIZE( brightness_nit_range_t, 0xc );                      
    };                                      
};
#include "magic/brightness_nit_range_t.end.hpp"
SDK_VERIFY( struct nt::brightness_nit_range_t, 0xc );
