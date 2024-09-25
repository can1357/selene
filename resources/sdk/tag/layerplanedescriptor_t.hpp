#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/layerplanedescriptor_t.start.hpp"
namespace tag
{
    // [struct tagLAYERPLANEDESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct layerplanedescriptor_t        
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint16_t n_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .nSize
        _m01 uint16_t n_version;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .nVersion
        _m02 uint32_t dw_flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m03 uint8_t  i_pixel_type;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iPixelType
        _m04 uint8_t  c_color_bits;        //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .cColorBits
        _m05 uint8_t  c_red_bits;          //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .cRedBits
        _m06 uint8_t  c_red_shift;         //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .cRedShift
        _m07 uint8_t  c_green_bits;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cGreenBits
        _m08 uint8_t  c_green_shift;       //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .cGreenShift
        _m09 uint8_t  c_blue_bits;         //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .cBlueBits
        _m10 uint8_t  c_blue_shift;        //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .cBlueShift
        _m11 uint8_t  c_alpha_bits;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cAlphaBits
        _m12 uint8_t  c_alpha_shift;       //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .cAlphaShift
        _m13 uint8_t  c_accum_bits;        //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .cAccumBits
        _m14 uint8_t  c_accum_red_bits;    //{ +0x0013    +0x0013    +0x0013    +0x0013    +0x0013    } | .cAccumRedBits
        _m15 uint8_t  c_accum_green_bits;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .cAccumGreenBits
        _m16 uint8_t  c_accum_blue_bits;   //{ +0x0015    +0x0015    +0x0015    +0x0015    +0x0015    } | .cAccumBlueBits
        _m17 uint8_t  c_accum_alpha_bits;  //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .cAccumAlphaBits
        _m18 uint8_t  c_depth_bits;        //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .cDepthBits
        _m19 uint8_t  c_stencil_bits;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cStencilBits
        _m20 uint8_t  c_aux_buffers;       //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .cAuxBuffers
        _m21 uint8_t  i_layer_plane;       //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .iLayerPlane
        _m22 uint8_t  b_reserved;          //{ +0x001b    +0x001b    +0x001b    +0x001b    +0x001b    } | .bReserved
        _m23 uint32_t cr_transparent;      //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .crTransparent
                                         
        SDK_NONVOL_PROPERTIES( "tagLAYERPLANEDESCRIPTOR.$", 0x20, true, 0x3311960c89e25917 );                   
        SDK_FIXED_SIZE( layerplanedescriptor_t, 0x20 );                   
    };                                   
};
#include "magic/layerplanedescriptor_t.end.hpp"
SDK_VERIFY( struct tag::layerplanedescriptor_t, 0x20 );
