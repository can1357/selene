#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getscanline_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETSCANLINE]
    // => WDK 10 (NV)
    //
    struct getscanline_t                
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t vid_pn_target_id;   //{ +0x0000    } | .VidPnTargetId
        _m01 uint8_t  in_vertical_blank;  //{ +0x0004    } | .InVerticalBlank
        _m02 uint32_t scan_line;          //{ +0x0008    } | .ScanLine
                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETSCANLINE.$", 0x0, false, 0xf2c35c3ecac89844 );                  
        SDK_FIXED_SIZE( getscanline_t, 0xc );                  
    };                                  
};
#include "magic/getscanline_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getscanline_t, 0xc );
