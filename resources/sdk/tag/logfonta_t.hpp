#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logfonta_t.start.hpp"
namespace tag
{
    // [struct tagLOGFONTA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logfonta_t                                 
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                            
        _m00 int32_t              lf_height;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lfHeight
        _m01 int32_t              lf_width;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .lfWidth
        _m02 int32_t              lf_escapement;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lfEscapement
        _m03 int32_t              lf_orientation;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lfOrientation
        _m04 int32_t              lf_weight;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lfWeight
        _m05 uint8_t              lf_italic;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .lfItalic
        _m06 uint8_t              lf_underline;         //{ +0x0015    +0x0015    +0x0015    +0x0015    +0x0015    } | .lfUnderline
        _m07 uint8_t              lf_strike_out;        //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .lfStrikeOut
        _m08 uint8_t              lf_char_set;          //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .lfCharSet
        _m09 uint8_t              lf_out_precision;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lfOutPrecision
        _m10 uint8_t              lf_clip_precision;    //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .lfClipPrecision
        _m11 uint8_t              lf_quality;           //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .lfQuality
        _m12 uint8_t              lf_pitch_and_family;  //{ +0x001b    +0x001b    +0x001b    +0x001b    +0x001b    } | .lfPitchAndFamily
        _m13 sdk::array<char, 32> lf_face_name;         //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .lfFaceName
                                                      
        SDK_NONVOL_PROPERTIES( "tagLOGFONTA.$", 0x3c, true, 0x5594796b43ee5926 );                    
        SDK_FIXED_SIZE( logfonta_t, 0x3c );                    
    };                                                
};
#include "magic/logfonta_t.end.hpp"
SDK_VERIFY( struct tag::logfonta_t, 0x3c );
