#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getscanline_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETSCANLINE]
    // => WDK 10 (NV)
    //
    struct getscanline_t                
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t h_adapter;          //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;   //{ +0x0004    } | .VidPnSourceId
        _m02 uint8_t  in_vertical_blank;  //{ +0x0008    } | .InVerticalBlank
        _m03 uint32_t scan_line;          //{ +0x000c    } | .ScanLine
                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETSCANLINE.$", 0x0, false, 0xe884ace4659b84eb );                  
        SDK_FIXED_SIZE( getscanline_t, 0x10 );                  
    };                                  
};
#include "magic/getscanline_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getscanline_t, 0x10 );
