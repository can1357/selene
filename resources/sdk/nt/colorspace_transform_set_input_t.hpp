#pragma once
#include <sdkgen/support_library.hpp>
#include "output_wire_format_t.hpp"
#include "colorspace_transform_t.hpp"
#include "output_wire_color_space_type_t.hpp"

#include "magic/colorspace_transform_set_input_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_SET_INPUT]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_set_input_t                                           
    {                                                                                 
        // WDK 10                                                                     
        //                                                                            
        _m00 enum nt::output_wire_color_space_type_t output_wire_color_space_expected;  //{ +0x0000    } | .OutputWireColorSpaceExpected
        _m01 struct nt::output_wire_format_t         output_wire_format_expected;       //{ +0x0004    } | .OutputWireFormatExpected
        _m02 struct nt::colorspace_transform_t       color_space_transform;             //{ +0x000c    } | .ColorSpaceTransform
                                                                                      
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_SET_INPUT.$", 0x0, false, 0x66c91347b288562e );                                 
        SDK_FIXED_SIZE( colorspace_transform_set_input_t, 0x18040 );                                 
    };                                                                                
};
#include "magic/colorspace_transform_set_input_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_set_input_t, 0x18040 );
