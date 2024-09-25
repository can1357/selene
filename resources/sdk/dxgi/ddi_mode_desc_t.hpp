#pragma once
#include <sdkgen/support_library.hpp>
#include "format_t.hpp"
#include "ddi_rational_t.hpp"
#include "ddi_mode_scaling_t.hpp"
#include "ddi_mode_rotation_t.hpp"
#include "ddi_mode_scanline_order_t.hpp"

#include "magic/ddi_mode_desc_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_MODE_DESC]
    // => WDK 10 (NV)
    //
    struct ddi_mode_desc_t                                          
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                             width;              //{ +0x0000    } | .Width
        _m01 uint32_t                             height;             //{ +0x0004    } | .Height
        _m02 enum dxgi::format_t                  format;             //{ +0x0008    } | .Format
        _m03 struct dxgi::ddi_rational_t          refresh_rate;       //{ +0x000c    } | .RefreshRate
        _m04 enum dxgi::ddi_mode_scanline_order_t scanline_ordering;  //{ +0x0014    } | .ScanlineOrdering
        _m05 enum dxgi::ddi_mode_rotation_t       rotation;           //{ +0x0018    } | .Rotation
        _m06 enum dxgi::ddi_mode_scaling_t        scaling;            //{ +0x001c    } | .Scaling
                                                                    
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_MODE_DESC.$", 0x0, false, 0xfcb9ab21a1ca31fc );                  
        SDK_FIXED_SIZE( ddi_mode_desc_t, 0x20 );                    
    };                                                              
};
#include "magic/ddi_mode_desc_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_mode_desc_t, 0x20 );
