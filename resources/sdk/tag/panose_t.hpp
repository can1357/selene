#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/panose_t.start.hpp"
namespace tag
{
    // [struct tagPANOSE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct panose_t                     
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 uint8_t b_family_type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bFamilyType
        _m01 uint8_t b_serif_style;       //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .bSerifStyle
        _m02 uint8_t b_weight;            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .bWeight
        _m03 uint8_t b_proportion;        //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .bProportion
        _m04 uint8_t b_contrast;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .bContrast
        _m05 uint8_t b_stroke_variation;  //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .bStrokeVariation
        _m06 uint8_t b_arm_style;         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .bArmStyle
        _m07 uint8_t b_letterform;        //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .bLetterform
        _m08 uint8_t b_midline;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .bMidline
        _m09 uint8_t b_x_height;          //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .bXHeight
                                        
        SDK_NONVOL_PROPERTIES( "tagPANOSE.$", 0xa, true, 0x1064242020710b );                   
        SDK_FIXED_SIZE( panose_t, 0xa );                   
    };                                  
};
#include "magic/panose_t.end.hpp"
SDK_VERIFY( struct tag::panose_t, 0xa );
