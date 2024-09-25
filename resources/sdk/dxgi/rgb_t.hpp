#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rgb_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_RGB]
    // => WDK 10 (NV)
    //
    struct rgb_t         
    {                    
        // WDK 10        
        //               
        _m00 float red;    //{ +0x0000    } | .Red
        _m01 float green;  //{ +0x0004    } | .Green
        _m02 float blue;   //{ +0x0008    } | .Blue
                         
        SDK_NONVOL_PROPERTIES( "DXGI_RGB.$", 0x0, false, 0x7e0a62b332540b1a );      
        SDK_FIXED_SIZE( rgb_t, 0xc );      
    };                   
};
#include "magic/rgb_t.end.hpp"
SDK_VERIFY( struct dxgi::rgb_t, 0xc );
