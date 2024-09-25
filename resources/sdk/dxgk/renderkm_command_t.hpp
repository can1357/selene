#pragma once
#include <sdkgen/support_library.hpp>
#include "gdiarg_bitblt_t.hpp"
#include "gdiarg_colorfill_t.hpp"
#include "gdiarg_alphablend_t.hpp"
#include "gdiarg_stretchblt_t.hpp"
#include "renderkm_operation_t.hpp"
#include "gdiarg_cleartypeblend_t.hpp"
#include "gdiarg_transparentblt_t.hpp"

#include "magic/renderkm_command_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_RENDERKM_COMMAND]
    // => WDK 10 (NV)
    //
    struct renderkm_command_t                                                       
    {                                                                               
        union u0_command_t                                                          
        {                                                                           
            // WDK 10                                                               
            //                                                                      
            _m02 struct dxgk::gdiarg_bitblt_t         bit_blt;                        //{ +0x0000    } | .BitBlt
            _m03 struct dxgk::gdiarg_colorfill_t      color_fill;                     //{ +0x0000    } | .ColorFill
            _m04 struct dxgk::gdiarg_alphablend_t     alpha_blend;                    //{ +0x0000    } | .AlphaBlend
            _m05 struct dxgk::gdiarg_stretchblt_t     stretch_blt;                    //{ +0x0000    } | .StretchBlt
            _m06 struct dxgk::gdiarg_transparentblt_t transparent_blt;                //{ +0x0000    } | .TransparentBlt
            _m07 struct dxgk::gdiarg_cleartypeblend_t clear_type_blend;               //{ +0x0000    } | .ClearTypeBlend
                                                                                    
            SDK_NONVOL_PROPERTIES( "_DXGK_RENDERKM_COMMAND.Command.$", 0x0, false, 0xf07d9d87921f0ac0 );                              
            SDK_FIXED_SIZE( u0_command_t, 0x48 );                                   
        };                                                                          
                                                                                    
        // WDK 10                                                                   
        //                                                                          
        _m00 enum dxgk::renderkm_operation_t                           op_code;       //{ +0x0000    } | .OpCode
        _m01 uint32_t                                                  command_size;  //{ +0x0004    } | .CommandSize
        _m08 u0_command_t                                              command;       //{ +0x0008    } | .Command
                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_RENDERKM_COMMAND.$", 0x0, false, 0xd14687d3d8b75297 );             
        SDK_FIXED_SIZE( renderkm_command_t, 0x50 );                                 
    };                                                                              
};
#include "magic/renderkm_command_t.end.hpp"
SDK_VERIFY( union dxgk::renderkm_command_t::u0_command_t, 0x48 );
SDK_VERIFY( struct dxgk::renderkm_command_t, 0x50 );
