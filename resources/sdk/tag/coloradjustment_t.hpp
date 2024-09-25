#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coloradjustment_t.start.hpp"
namespace tag
{
    // [struct tagCOLORADJUSTMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct coloradjustment_t              
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint16_t ca_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .caSize
        _m01 uint16_t ca_flags;             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .caFlags
        _m02 uint16_t ca_illuminant_index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .caIlluminantIndex
        _m03 uint16_t ca_red_gamma;         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .caRedGamma
        _m04 uint16_t ca_green_gamma;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .caGreenGamma
        _m05 uint16_t ca_blue_gamma;        //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .caBlueGamma
        _m06 uint16_t ca_reference_black;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .caReferenceBlack
        _m07 uint16_t ca_reference_white;   //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .caReferenceWhite
        _m08 int16_t  ca_contrast;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .caContrast
        _m09 int16_t  ca_brightness;        //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .caBrightness
        _m10 int16_t  ca_colorfulness;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .caColorfulness
        _m11 int16_t  ca_red_green_tint;    //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .caRedGreenTint
                                          
        SDK_NONVOL_PROPERTIES( "tagCOLORADJUSTMENT.$", 0x18, true, 0xeba5ac6f2ee78d1d );                    
        SDK_FIXED_SIZE( coloradjustment_t, 0x18 );                    
    };                                    
};
#include "magic/coloradjustment_t.end.hpp"
SDK_VERIFY( struct tag::coloradjustment_t, 0x18 );
