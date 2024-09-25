#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "../tag/point_t.hpp"
#include "../tag/panose_t.hpp"
#include "../tag/textmetrica_t.hpp"

#include "magic/outlinetextmetrica_t.start.hpp"
namespace win
{
    // [struct _OUTLINETEXTMETRICA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct outlinetextmetrica_t                                  
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m000 uint32_t                  otm_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .otmSize
        _m001 struct tag::textmetrica_t otm_text_metrics;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .otmTextMetrics
        _m002 uint8_t                   otm_filler;                //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .otmFiller
        _m003 struct tag::panose_t      otm_panose_number;         //{ +0x003d    +0x003d    +0x003d    +0x003d    +0x003d    } | .otmPanoseNumber
        _m004 uint32_t                  otmfs_selection;           //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .otmfsSelection
        _m005 uint32_t                  otmfs_type;                //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .otmfsType
        _m006 int32_t                   otms_char_slope_rise;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .otmsCharSlopeRise
        _m007 int32_t                   otms_char_slope_run;       //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .otmsCharSlopeRun
        _m008 int32_t                   otm_italic_angle;          //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .otmItalicAngle
        _m009 uint32_t                  otm_em_square;             //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .otmEMSquare
        _m010 int32_t                   otm_ascent;                //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .otmAscent
        _m011 int32_t                   otm_descent;               //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .otmDescent
        _m012 uint32_t                  otm_line_gap;              //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .otmLineGap
        _m013 uint32_t                  otms_cap_em_height;        //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .otmsCapEmHeight
        _m014 uint32_t                  otms_x_height;             //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .otmsXHeight
        _m015 struct tag::rect_t        otmrc_font_box;            //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .otmrcFontBox
        _m016 int32_t                   otm_mac_ascent;            //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .otmMacAscent
        _m017 int32_t                   otm_mac_descent;           //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .otmMacDescent
        _m018 uint32_t                  otm_mac_line_gap;          //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .otmMacLineGap
        _m019 uint32_t                  otmus_minimum_ppem;        //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .otmusMinimumPPEM
        _m020 struct tag::point_t       otmpt_subscript_size;      //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .otmptSubscriptSize
        _m021 struct tag::point_t       otmpt_subscript_offset;    //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .otmptSubscriptOffset
        _m022 struct tag::point_t       otmpt_superscript_size;    //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .otmptSuperscriptSize
        _m023 struct tag::point_t       otmpt_superscript_offset;  //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .otmptSuperscriptOffset
        _m024 uint32_t                  otms_strikeout_size;       //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .otmsStrikeoutSize
        _m025 int32_t                   otms_strikeout_position;   //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .otmsStrikeoutPosition
        _m026 int32_t                   otms_underscore_size;      //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .otmsUnderscoreSize
        _m027 int32_t                   otms_underscore_position;  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .otmsUnderscorePosition
        _m028 char*                     otmp_family_name;          //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .otmpFamilyName
        _m029 char*                     otmp_face_name;            //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .otmpFaceName
        _m030 char*                     otmp_style_name;           //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .otmpStyleName
        _m031 char*                     otmp_full_name;            //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .otmpFullName
                                                                 
        SDK_NONVOL_PROPERTIES( "_OUTLINETEXTMETRICA.$", 0xe8, true, 0xbb01c10ac360d035 );                         
        SDK_FIXED_SIZE( outlinetextmetrica_t, 0xe8 );                         
    };                                                           
};
#include "magic/outlinetextmetrica_t.end.hpp"
SDK_VERIFY( struct win::outlinetextmetrica_t, 0xe8 );
