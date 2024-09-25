#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mipi_dsi_reset_t.start.hpp"
namespace nt
{
    // [struct _MIPI_DSI_RESET]
    // => WDK 10 (NV)
    //
    struct mipi_dsi_reset_t         
    {                               
        // WDK 10                   
        //                          
        _m00 uint32_t flags;          //{ +0x0000    } | .Flags
        _m01 uint16_t mipi_errors;    //{ +0x0004@0  } | .MipiErrors
        _m02 uint1_t  reset_failed;   //{ +0x0004@16 } | .ResetFailed
        _m03 uint1_t  need_mode_set;  //{ +0x0004@17 } | .NeedModeSet
        _m04 uint32_t results;        //{ +0x0004    } | .Results
                                    
        SDK_NONVOL_PROPERTIES( "_MIPI_DSI_RESET.$", 0x0, false, 0x62e143123188aa2e );              
        SDK_FIXED_SIZE( mipi_dsi_reset_t, 0x8 );              
    };                              
};
#include "magic/mipi_dsi_reset_t.end.hpp"
SDK_VERIFY( struct nt::mipi_dsi_reset_t, 0x8 );
