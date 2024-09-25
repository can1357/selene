#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/palettedata_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_PALETTEDATA]
    // => WDK 10 (NV)
    //
    struct palettedata_t   
    {                      
        // WDK 10          
        //                 
        _m00 uint8_t red;    //{ +0x0000    } | .Red
        _m01 uint8_t green;  //{ +0x0001    } | .Green
        _m02 uint8_t blue;   //{ +0x0002    } | .Blue
                           
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_PALETTEDATA.$", 0x0, false, 0xd93d0ab6b78b28c2 );      
        SDK_FIXED_SIZE( palettedata_t, 0x4 );      
    };                     
};
#include "magic/palettedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::palettedata_t, 0x4 );
