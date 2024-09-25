#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_sensor_data_chromaticity_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_SENSOR_DATA_CHROMATICITY]
    // => WDK 10 (NV)
    //
    struct brightness_sensor_data_chromaticity_t
    {                                           
        // WDK 10                 
        //                        
        _m00 float chromaticity_x;                //{ +0x0000    } | .ChromaticityX
        _m01 float chromaticity_y;                //{ +0x0004    } | .ChromaticityY
                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_SENSOR_DATA_CHROMATICITY.$", 0x0, false, 0x9488c7ca040ccb11 );               
        SDK_FIXED_SIZE( brightness_sensor_data_chromaticity_t, 0x8 );               
    };                                          
};
#include "magic/brightness_sensor_data_chromaticity_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_sensor_data_chromaticity_t, 0x8 );
