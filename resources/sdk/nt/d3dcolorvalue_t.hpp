#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dcolorvalue_t.start.hpp"
namespace nt
{
    // [struct _D3DCOLORVALUE]
    // => WDK 10 (NV)
    //
    struct d3dcolorvalue_t
    {                     
        // WDK 10    
        //           
        _m00 float r;       //{ +0x0000    } | .r
        _m01 float g;       //{ +0x0004    } | .g
        _m02 float b;       //{ +0x0008    } | .b
        _m03 float a;       //{ +0x000c    } | .a
                          
        SDK_NONVOL_PROPERTIES( "_D3DCOLORVALUE.$", 0x0, false, 0x17ad40982e3eebd9 );  
        SDK_FIXED_SIZE( d3dcolorvalue_t, 0x10 );  
    };                    
};
#include "magic/d3dcolorvalue_t.end.hpp"
SDK_VERIFY( struct nt::d3dcolorvalue_t, 0x10 );
