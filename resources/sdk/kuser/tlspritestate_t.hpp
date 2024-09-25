#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tlspritestate_t.start.hpp"
namespace kuser
{
    // [struct _TLSPRITESTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tlspritestate_t                     
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint8_t  b_inside_driver_call;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bInsideDriverCall
        _m01 uint32_t fl_original_surf_flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flOriginalSurfFlags
        _m02 uint32_t i_original_type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iOriginalType
        _m03 uint32_t fl_sprite_surf_flags;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .flSpriteSurfFlags
        _m04 uint32_t i_sprite_type;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iSpriteType
        _m05 uint32_t flags;                     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .flags
        _m06 uint32_t i_type;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .iType
        _m07 void*    p_state;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pState
        _m08 void*    pfn_stroke_and_fill_path;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pfnStrokeAndFillPath
        _m09 void*    pfn_stroke_path;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pfnStrokePath
        _m10 void*    pfn_fill_path;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pfnFillPath
        _m11 void*    pfn_paint;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pfnPaint
        _m12 void*    pfn_bit_blt;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pfnBitBlt
        _m13 void*    pfn_copy_bits;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pfnCopyBits
        _m14 void*    pfn_stretch_blt;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pfnStretchBlt
        _m15 void*    pfn_text_out;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .pfnTextOut
        _m16 void*    pfn_line_to;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pfnLineTo
        _m17 void*    pfn_transparent_blt;       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .pfnTransparentBlt
        _m18 void*    pfn_alpha_blend;           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .pfnAlphaBlend
        _m19 void*    pfn_plg_blt;               //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .pfnPlgBlt
        _m20 void*    pfn_gradient_fill;         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .pfnGradientFill
        _m21 void*    pfn_save_screen_bits;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .pfnSaveScreenBits
        _m22 void*    pfn_stretch_blt_rop;       //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .pfnStretchBltROP
        _m23 void*    pfn_draw_stream;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .pfnDrawStream
                                               
        SDK_MAGIC_PROPERTIES( "_TLSPRITESTATE.$", 0xa8, true, 0x4a9c82b28d72dc9c );                         
        SDK_FIXED_SIZE( tlspritestate_t, 0xa8 );                         
    };                                         
};
#include "magic/tlspritestate_t.end.hpp"
SDK_VERIFY( struct kuser::tlspritestate_t, 0xa8 );
