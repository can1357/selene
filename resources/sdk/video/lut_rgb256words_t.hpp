#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lut_rgb256words_t.start.hpp"
namespace video
{
    // [struct _VIDEO_LUT_RGB256WORDS]
    // => WDK 10 (NV)
    //
    struct lut_rgb256words_t                 
    {                                        
        // WDK 10                            
        //                                   
        _m00 sdk::array<uint16_t, 256> red;    //{ +0x0000    } | .Red
        _m01 sdk::array<uint16_t, 256> green;  //{ +0x0200    } | .Green
        _m02 sdk::array<uint16_t, 256> blue;   //{ +0x0400    } | .Blue
                                             
        SDK_NONVOL_PROPERTIES( "_VIDEO_LUT_RGB256WORDS.$", 0x0, false, 0xb3e98fc8571c178f );      
        SDK_FIXED_SIZE( lut_rgb256words_t, 0x600 );      
    };                                       
};
#include "magic/lut_rgb256words_t.end.hpp"
SDK_VERIFY( struct video::lut_rgb256words_t, 0x600 );
