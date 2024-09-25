#pragma once
#include <sdkgen/support_library.hpp>
#include "format_t.hpp"
#include "rational_t.hpp"
#include "mode_scaling_t.hpp"
#include "mode_scanline_order_t.hpp"

#include "magic/mode_desc_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_MODE_DESC]
    // => WDK 10 (NV)
    //
    struct mode_desc_t                                          
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint32_t                         width;              //{ +0x0000    } | .Width
        _m01 uint32_t                         height;             //{ +0x0004    } | .Height
        _m02 struct dxgi::rational_t          refresh_rate;       //{ +0x0008    } | .RefreshRate
        _m03 enum dxgi::format_t              format;             //{ +0x0010    } | .Format
        _m04 enum dxgi::mode_scanline_order_t scanline_ordering;  //{ +0x0014    } | .ScanlineOrdering
        _m05 enum dxgi::mode_scaling_t        scaling;            //{ +0x0018    } | .Scaling
                                                                
        SDK_NONVOL_PROPERTIES( "DXGI_MODE_DESC.$", 0x0, false, 0x69b0a5ccfcf122a );                  
        SDK_FIXED_SIZE( mode_desc_t, 0x1c );                    
    };                                                          
};
#include "magic/mode_desc_t.end.hpp"
SDK_VERIFY( struct dxgi::mode_desc_t, 0x1c );
