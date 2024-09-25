#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_sensor_data_chromaticity_t.hpp"

#include "magic/brightness_sensor_data_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_SENSOR_DATA]
    // => WDK 10 (NV)
    //
    struct brightness_sensor_data_t                                  
    {                                                                
        struct u0_flags_t                                            
        {                                                            
            // WDK 10                                                
            //                                                       
            _m01 uint1_t als_reading_valid;                            //{ +0x0000@0  } | .AlsReadingValid
            _m02 uint1_t chromaticity_valid;                           //{ +0x0000@1  } | .ChromaticityValid
            _m03 uint1_t color_temperature_valid;                      //{ +0x0000@2  } | .ColorTemperatureValid
                                                                     
            SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_SENSOR_DATA.Flags.$", 0x0, false, 0xed6230273b1bd645 );                                            
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                            
        };                                                           
                                                                     
        using chromaticity_t = struct dxgk::brightness_sensor_data_chromaticity_t;                    
                                                                     
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                            size;                 //{ +0x0000    } | .Size
        _m04 u0_flags_t                          flags;                //{ +0x0004    } | .Flags
        _m05 uint32_t                            valid_sensor_values;  //{ +0x0004    } | .ValidSensorValues
        _m06 float                               als_reading;          //{ +0x0008    } | .AlsReading
        _m07 chromaticity_t                      chromaticity;         //{ +0x000c    } | .Chromaticity
        _m08 float                               color_temperature;    //{ +0x0014    } | .ColorTemperature
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_SENSOR_DATA.$", 0x0, false, 0xc593ddee7a6a5dee );                    
        SDK_FIXED_SIZE( brightness_sensor_data_t, 0x18 );                    
    };                                                               
};
#include "magic/brightness_sensor_data_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_sensor_data_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct dxgk::brightness_sensor_data_t, 0x18 );
