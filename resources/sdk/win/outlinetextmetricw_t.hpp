#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "../tag/point_t.hpp"
#include "../tag/panose_t.hpp"
#include "../tag/textmetricw_t.hpp"

#include "magic/outlinetextmetricw_t.start.hpp"
namespace win
{
    // [struct _OUTLINETEXTMETRICW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct outlinetextmetricw_t                                  
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m000 uint32_t                  otm_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .otmSize
        _m001 struct tag::textmetricw_t otm_text_metrics;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .otmTextMetrics
        _m002 uint8_t                   otm_filler;                //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .otmFiller
        _m003 struct tag::panose_t      otm_panose_number;         //{ +0x0041    +0x0041    +0x0041    +0x0041    +0x0041    } | .otmPanoseNumber
        _m004 uint32_t                  otmfs_selection;           //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .otmfsSelection
        _m005 uint32_t                  otmfs_type;                //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .otmfsType
        _m006 int32_t                   otms_char_slope_rise;      //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .otmsCharSlopeRise
        _m007 int32_t                   otms_char_slope_run;       //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .otmsCharSlopeRun
        _m008 int32_t                   otm_italic_angle;          //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .otmItalicAngle
        _m009 uint32_t                  otm_em_square;             //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .otmEMSquare
        _m010 int32_t                   otm_ascent;                //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .otmAscent
        _m011 int32_t                   otm_descent;               //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .otmDescent
        _m012 uint32_t                  otm_line_gap;              //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .otmLineGap
        _m013 uint32_t                  otms_cap_em_height;        //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .otmsCapEmHeight
        _m014 uint32_t                  otms_x_height;             //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .otmsXHeight
        _m015 struct tag::rect_t        otmrc_font_box;            //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .otmrcFontBox
        _m016 int32_t                   otm_mac_ascent;            //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .otmMacAscent
        _m017 int32_t                   otm_mac_descent;           //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .otmMacDescent
        _m018 uint32_t                  otm_mac_line_gap;          //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .otmMacLineGap
        _m019 uint32_t                  otmus_minimum_ppem;        //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .otmusMinimumPPEM
        _m020 struct tag::point_t       otmpt_subscript_size;      //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .otmptSubscriptSize
        _m021 struct tag::point_t       otmpt_subscript_offset;    //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .otmptSubscriptOffset
        _m022 struct tag::point_t       otmpt_superscript_size;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .otmptSuperscriptSize
        _m023 struct tag::point_t       otmpt_superscript_offset;  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .otmptSuperscriptOffset
        _m024 uint32_t                  otms_strikeout_size;       //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .otmsStrikeoutSize
        _m025 int32_t                   otms_strikeout_position;   //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .otmsStrikeoutPosition
        _m026 int32_t                   otms_underscore_size;      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .otmsUnderscoreSize
        _m027 int32_t                   otms_underscore_position;  //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .otmsUnderscorePosition
        _m028 char*                     otmp_family_name;          //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .otmpFamilyName
        _m029 char*                     otmp_face_name;            //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .otmpFaceName
        _m030 char*                     otmp_style_name;           //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .otmpStyleName
        _m031 char*                     otmp_full_name;            //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .otmpFullName
                                                                 
        SDK_NONVOL_PROPERTIES( "_OUTLINETEXTMETRICW.$", 0xe8, true, 0x13c5a561a666cad0 );                         
        SDK_FIXED_SIZE( outlinetextmetricw_t, 0xe8 );                         
    };                                                           
};
#include "magic/outlinetextmetricw_t.end.hpp"
SDK_VERIFY( struct win::outlinetextmetricw_t, 0xe8 );
