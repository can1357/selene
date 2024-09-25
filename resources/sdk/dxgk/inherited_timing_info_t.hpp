#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/color_space_type_t.hpp"
#include "../d3dk/mdt/wire_format_and_preference_t.hpp"
#include "../d3d/ddi/output_wire_color_space_type_t.hpp"

#include "magic/inherited_timing_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_INHERITED_TIMING_INFO]
    // => WDK 10 (NV)
    //
    struct inherited_timing_info_t                                                 
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 enum d3d::ddi::color_space_type_t             output_color_space;       //{ +0x0000    } | .OutputColorSpace
        _m01 enum d3d::ddi::output_wire_color_space_type_t output_wire_color_space;  //{ +0x0000    } | .OutputWireColorSpace
        _m02 union d3dk::mdt::wire_format_and_preference_t selected_wire_format;     //{ +0x0004    } | .SelectedWireFormat
        _m03 uint8_t                                       glitch_cause;             //{ +0x0008    } | .GlitchCause
        _m04 uint8_t                                       glitch_effect;            //{ +0x0009    } | .GlitchEffect
        _m05 uint8_t                                       glitch_duration;          //{ +0x000a    } | .GlitchDuration
        _m06 uint32_t                                      diagnostic_info;          //{ +0x0008    } | .DiagnosticInfo
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_INHERITED_TIMING_INFO.$", 0x0, false, 0xfa8923492443c3e );                        
        SDK_FIXED_SIZE( inherited_timing_info_t, 0xc );                            
    };                                                                             
};
#include "magic/inherited_timing_info_t.end.hpp"
SDK_VERIFY( struct dxgk::inherited_timing_info_t, 0xc );
