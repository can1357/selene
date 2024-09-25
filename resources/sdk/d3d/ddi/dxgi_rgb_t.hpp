#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dxgi_rgb_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_DXGI_RGB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dxgi_rgb_t    
    {                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 float red;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Red
        _m01 float green;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Green
        _m02 float blue;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Blue
                         
        SDK_NONVOL_PROPERTIES( "D3DDDI_DXGI_RGB.$", 0xc, true, 0x7baca097a2570bc9 );      
        SDK_FIXED_SIZE( dxgi_rgb_t, 0xc );      
    };                   
};
#include "magic/dxgi_rgb_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::dxgi_rgb_t, 0xc );
