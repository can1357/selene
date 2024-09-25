#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/config_alpha_combine_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ConfigAlphaCombine]
    // => WDK 10 (NV)
    //
    struct config_alpha_combine_t                                         
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 uint32_t                dw_function;                           //{ +0x0000    } | .dwFunction
        _m01 sdk::array<uint32_t, 3> dw_reserved_bits;                      //{ +0x0004    } | .dwReservedBits
        _m02 uint8_t                 b_config_blend_type;                   //{ +0x0010    } | .bConfigBlendType
        _m03 uint8_t                 b_config_picture_resizing;             //{ +0x0011    } | .bConfigPictureResizing
        _m04 uint8_t                 b_config_only_use_pic_dest_rect_area;  //{ +0x0012    } | .bConfigOnlyUsePicDestRectArea
        _m05 uint8_t                 b_config_graphic_resizing;             //{ +0x0013    } | .bConfigGraphicResizing
        _m06 uint8_t                 b_config_whole_plane_alpha;            //{ +0x0014    } | .bConfigWholePlaneAlpha
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXVA_ConfigAlphaCombine.$", 0x0, false, 0x29ac148a75ac1181 );                                     
        SDK_FIXED_SIZE( config_alpha_combine_t, 0x15 );                                     
    };                                                                    
};
#include "magic/config_alpha_combine_t.end.hpp"
SDK_VERIFY( struct dxva::config_alpha_combine_t, 0x15 );
