#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dsi_reset_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DSI_RESET]
    // => WDK 10 (NV)
    //
    struct dsi_reset_t              
    {                               
        // WDK 10                   
        //                          
        _m00 uint32_t flags;          //{ +0x0000    } | .Flags
        _m01 uint16_t mipi_errors;    //{ +0x0004@0  } | .MipiErrors
        _m02 uint1_t  reset_failed;   //{ +0x0004@16 } | .ResetFailed
        _m03 uint1_t  need_mode_set;  //{ +0x0004@17 } | .NeedModeSet
        _m04 uint32_t results;        //{ +0x0004    } | .Results
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_DSI_RESET.$", 0x0, false, 0x9a4830e879d298e4 );              
        SDK_FIXED_SIZE( dsi_reset_t, 0x8 );              
    };                              
};
#include "magic/dsi_reset_t.end.hpp"
SDK_VERIFY( struct dxgk::dsi_reset_t, 0x8 );
