#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/_2dregion_t.hpp"
#include "standard_colorimetry_flags_t.hpp"
#include "../d3dk/mdt/wire_format_and_preference_t.hpp"

#include "magic/colorimetry_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_COLORIMETRY]
    // => WDK 10 (NV)
    //
    struct colorimetry_t                                                              
    {                                                                                 
        // WDK 10                                                                     
        //                                                                            
        _m00 struct d3dk::mdt::_2dregion_t                 red_point;                   //{ +0x0000    } | .RedPoint
        _m01 struct d3dk::mdt::_2dregion_t                 green_point;                 //{ +0x0008    } | .GreenPoint
        _m02 struct d3dk::mdt::_2dregion_t                 blue_point;                  //{ +0x0010    } | .BluePoint
        _m03 struct d3dk::mdt::_2dregion_t                 white_point;                 //{ +0x0018    } | .WhitePoint
        _m04 uint32_t                                      min_luminance;               //{ +0x0020    } | .MinLuminance
        _m05 uint32_t                                      max_luminance;               //{ +0x0024    } | .MaxLuminance
        _m06 uint32_t                                      max_full_frame_luminance;    //{ +0x0028    } | .MaxFullFrameLuminance
        _m07 union d3dk::mdt::wire_format_and_preference_t format_bit_depths;           //{ +0x002c    } | .FormatBitDepths
        _m08 union dxgk::standard_colorimetry_flags_t      standard_colorimetry_flags;  //{ +0x0030    } | .StandardColorimetryFlags
                                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_COLORIMETRY.$", 0x0, false, 0x74773bc062390c3f );                           
        SDK_FIXED_SIZE( colorimetry_t, 0x34 );                                        
    };                                                                                
};
#include "magic/colorimetry_t.end.hpp"
SDK_VERIFY( struct dxgk::colorimetry_t, 0x34 );
