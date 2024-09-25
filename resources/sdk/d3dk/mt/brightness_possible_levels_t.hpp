#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_possible_levels_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS]
    // => WDK 10 (NV)
    //
    struct brightness_possible_levels_t                 
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint8_t                  level_count;        //{ +0x0000    } | .LevelCount
        _m01 sdk::array<uint8_t, 256> brightness_levels;  //{ +0x0001    } | .BrightnessLevels
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS.$", 0x0, false, 0x1bddb2eb815c0307 );                  
        SDK_FIXED_SIZE( brightness_possible_levels_t, 0x101 );                  
    };                                                  
};
#include "magic/brightness_possible_levels_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::brightness_possible_levels_t, 0x101 );
