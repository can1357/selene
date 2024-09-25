#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pixelformatdescriptor_t.start.hpp"
namespace tag
{
    // [struct tagPIXELFORMATDESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pixelformatdescriptor_t        
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                
        _m000 uint16_t n_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .nSize
        _m001 uint16_t n_version;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .nVersion
        _m002 uint32_t dw_flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m003 uint8_t  i_pixel_type;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iPixelType
        _m004 uint8_t  c_color_bits;        //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .cColorBits
        _m005 uint8_t  c_red_bits;          //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .cRedBits
        _m006 uint8_t  c_red_shift;         //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .cRedShift
        _m007 uint8_t  c_green_bits;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cGreenBits
        _m008 uint8_t  c_green_shift;       //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .cGreenShift
        _m009 uint8_t  c_blue_bits;         //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .cBlueBits
        _m010 uint8_t  c_blue_shift;        //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .cBlueShift
        _m011 uint8_t  c_alpha_bits;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cAlphaBits
        _m012 uint8_t  c_alpha_shift;       //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .cAlphaShift
        _m013 uint8_t  c_accum_bits;        //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .cAccumBits
        _m014 uint8_t  c_accum_red_bits;    //{ +0x0013    +0x0013    +0x0013    +0x0013    +0x0013    } | .cAccumRedBits
        _m015 uint8_t  c_accum_green_bits;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .cAccumGreenBits
        _m016 uint8_t  c_accum_blue_bits;   //{ +0x0015    +0x0015    +0x0015    +0x0015    +0x0015    } | .cAccumBlueBits
        _m017 uint8_t  c_accum_alpha_bits;  //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .cAccumAlphaBits
        _m018 uint8_t  c_depth_bits;        //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .cDepthBits
        _m019 uint8_t  c_stencil_bits;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cStencilBits
        _m020 uint8_t  c_aux_buffers;       //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .cAuxBuffers
        _m021 uint8_t  i_layer_type;        //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .iLayerType
        _m022 uint8_t  b_reserved;          //{ +0x001b    +0x001b    +0x001b    +0x001b    +0x001b    } | .bReserved
        _m023 uint32_t dw_layer_mask;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .dwLayerMask
        _m024 uint32_t dw_visible_mask;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .dwVisibleMask
        _m025 uint32_t dw_damage_mask;      //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .dwDamageMask
                                          
        SDK_NONVOL_PROPERTIES( "tagPIXELFORMATDESCRIPTOR.$", 0x28, true, 0xfa0eff825ae27063 );                   
        SDK_FIXED_SIZE( pixelformatdescriptor_t, 0x28 );                   
    };                                    
};
#include "magic/pixelformatdescriptor_t.end.hpp"
SDK_VERIFY( struct tag::pixelformatdescriptor_t, 0x28 );
