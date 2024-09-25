#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_info_type_t.hpp"
#include "../../dxgk/backlight_info_t.hpp"
#include "../../dxgk/brightness_caps_t.hpp"
#include "brightness_possible_levels_t.hpp"
#include "../../dxgk/brightness_state_t.hpp"
#include "../../dxgk/brightness_set_in_t.hpp"
#include "../../dxgk/brightness_get_out_t.hpp"
#include "../../dxgk/brightness_get_nit_ranges_out_t.hpp"

#include "magic/brightness_info_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_BRIGHTNESS_INFO]
    // => WDK 10 (NV)
    //
    struct brightness_info_t                                                        
    {                                                                               
        enum class u0_optimization_level_t : int32_t                                
        {                                                                           
            disable = 0x0,                                                            // WDK 10
            desktop = 0x1,                                                            // WDK 10
            dynamic = 0x2,                                                            // WDK 10
            dimmed =  0x3,                                                            // WDK 10
            edr =     0x4,                                                            // WDK 10
        };                                                                          
                                                                                    
        // WDK 10                                                                   
        //                                                                          
        _m00 enum d3dk::mt::brightness_info_type_t         type;                      //{ +0x0000    } | .Type
        _m01 uint32_t                                      child_uid;                 //{ +0x0004    } | .ChildUid
        _m02 struct d3dk::mt::brightness_possible_levels_t possible_levels;           //{ +0x0008    } | .PossibleLevels
        _m03 uint8_t                                       brightness;                //{ +0x0008    } | .Brightness
        _m04 struct dxgk::brightness_caps_t                brightness_caps;           //{ +0x0008    } | .BrightnessCaps
        _m05 struct dxgk::brightness_state_t               brightness_state;          //{ +0x0008    } | .BrightnessState
        _m06 u0_optimization_level_t                       optimization_level;        //{ +0x0008    } | .OptimizationLevel
        _m07 struct dxgk::backlight_info_t                 reduction_info;            //{ +0x0008    } | .ReductionInfo
        _m08 uint8_t                                       verbose_logging;           //{ +0x0008    } | .VerboseLogging
        _m09 struct dxgk::brightness_get_nit_ranges_out_t  nit_ranges;                //{ +0x0008    } | .NitRanges
        _m10 struct dxgk::brightness_get_out_t             get_brightness_millinits;  //{ +0x0008    } | .GetBrightnessMillinits
        _m11 struct dxgk::brightness_set_in_t              set_brightness_millinits;  //{ +0x0008    } | .SetBrightnessMillinits
                                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_BRIGHTNESS_INFO.$", 0x0, false, 0xd9f13224d7685d4d );                         
        SDK_FIXED_SIZE( brightness_info_t, 0x60c );                                 
    };                                                                              
};
#include "magic/brightness_info_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::brightness_info_t, 0x60c );
