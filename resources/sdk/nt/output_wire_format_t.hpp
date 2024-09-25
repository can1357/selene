#pragma once
#include <sdkgen/support_library.hpp>
#include "output_color_encoding_t.hpp"

#include "magic/output_wire_format_t.start.hpp"
namespace nt
{
    // [struct _OUTPUT_WIRE_FORMAT]
    // => WDK 10 (NV)
    //
    struct output_wire_format_t                              
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 enum nt::output_color_encoding_t color_encoding;  //{ +0x0000    } | .ColorEncoding
        _m01 uint32_t                         bits_per_pixel;  //{ +0x0004    } | .BitsPerPixel
                                                             
        SDK_NONVOL_PROPERTIES( "_OUTPUT_WIRE_FORMAT.$", 0x0, false, 0x3e203698faab5942 );               
        SDK_FIXED_SIZE( output_wire_format_t, 0x8 );               
    };                                                       
};
#include "magic/output_wire_format_t.end.hpp"
SDK_VERIFY( struct nt::output_wire_format_t, 0x8 );
