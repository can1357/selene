#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/video_property_range_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_VideoPropertyRange]
    // => WDK 10 (NV)
    //
    struct video_property_range_t
    {                            
        // WDK 10                
        //                       
        _m00 float min_value;      //{ +0x0000    } | .MinValue
        _m01 float max_value;      //{ +0x0004    } | .MaxValue
        _m02 float default_value;  //{ +0x0008    } | .DefaultValue
        _m03 float step_size;      //{ +0x000c    } | .StepSize
                                 
        SDK_NONVOL_PROPERTIES( "_DXVA_VideoPropertyRange.$", 0x0, false, 0xdff6ffb9bf118d9c );              
        SDK_FIXED_SIZE( video_property_range_t, 0x10 );              
    };                           
};
#include "magic/video_property_range_t.end.hpp"
SDK_VERIFY( struct dxva::video_property_range_t, 0x10 );
