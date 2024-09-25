#pragma once
#include <sdkgen/support_library.hpp>
#include "chromaticity_coordinate_t.hpp"

#include "magic/panel_brightness_sensor_data_t.start.hpp"
namespace nt
{
    // [struct _PANEL_BRIGHTNESS_SENSOR_DATA]
    // => WDK 10 (NV)
    //
    struct panel_brightness_sensor_data_t                                       
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint1_t                              als_reading_valid;              //{ +0x0000@0  } | .AlsReadingValid
        _m01 uint1_t                              chromaticity_coordinate_valid;  //{ +0x0000@1  } | .ChromaticityCoordinateValid
        _m02 uint1_t                              color_temperature_valid;        //{ +0x0000@2  } | .ColorTemperatureValid
        _m03 uint32_t                             value;                          //{ +0x0000    } | .Value
        _m04 float                                als_reading;                    //{ +0x0004    } | .AlsReading
        _m05 struct nt::chromaticity_coordinate_t chromaticity_coordinate;        //{ +0x0008    } | .ChromaticityCoordinate
        _m06 float                                color_temperature;              //{ +0x0010    } | .ColorTemperature
                                                                                
        SDK_NONVOL_PROPERTIES( "_PANEL_BRIGHTNESS_SENSOR_DATA.$", 0x0, false, 0x3c73547522cf1992 );                              
        SDK_FIXED_SIZE( panel_brightness_sensor_data_t, 0x14 );                              
    };                                                                          
};
#include "magic/panel_brightness_sensor_data_t.end.hpp"
SDK_VERIFY( struct nt::panel_brightness_sensor_data_t, 0x14 );
