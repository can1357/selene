#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/textmetricw_t.start.hpp"
namespace tag
{
    // [struct tagTEXTMETRICW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct textmetricw_t                   
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 int32_t tm_height;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .tmHeight
        _m01 int32_t tm_ascent;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .tmAscent
        _m02 int32_t tm_descent;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .tmDescent
        _m03 int32_t tm_internal_leading;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .tmInternalLeading
        _m04 int32_t tm_external_leading;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .tmExternalLeading
        _m05 int32_t tm_ave_char_width;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .tmAveCharWidth
        _m06 int32_t tm_max_char_width;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .tmMaxCharWidth
        _m07 int32_t tm_weight;              //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .tmWeight
        _m08 int32_t tm_overhang;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .tmOverhang
        _m09 int32_t tm_digitized_aspect_x;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .tmDigitizedAspectX
        _m10 int32_t tm_digitized_aspect_y;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .tmDigitizedAspectY
        _m11 wchar_t tm_first_char;          //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .tmFirstChar
        _m12 wchar_t tm_last_char;           //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .tmLastChar
        _m13 wchar_t tm_default_char;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .tmDefaultChar
        _m14 wchar_t tm_break_char;          //{ +0x0032    +0x0032    +0x0032    +0x0032    +0x0032    } | .tmBreakChar
        _m15 uint8_t tm_italic;              //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .tmItalic
        _m16 uint8_t tm_underlined;          //{ +0x0035    +0x0035    +0x0035    +0x0035    +0x0035    } | .tmUnderlined
        _m17 uint8_t tm_struck_out;          //{ +0x0036    +0x0036    +0x0036    +0x0036    +0x0036    } | .tmStruckOut
        _m18 uint8_t tm_pitch_and_family;    //{ +0x0037    +0x0037    +0x0037    +0x0037    +0x0037    } | .tmPitchAndFamily
        _m19 uint8_t tm_char_set;            //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .tmCharSet
                                           
        SDK_NONVOL_PROPERTIES( "tagTEXTMETRICW.$", 0x3c, true, 0xb64dd6f5a547bb60 );                      
        SDK_FIXED_SIZE( textmetricw_t, 0x3c );                      
    };                                     
};
#include "magic/textmetricw_t.end.hpp"
SDK_VERIFY( struct tag::textmetricw_t, 0x3c );