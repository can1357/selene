#pragma once
#include <sdkgen/support_library.hpp>
#include "../../kuser/d3dddiformat_t.hpp"

#include "magic/shadowsurfacedata_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_SHADOWSURFACEDATA]
    // => WDK 10 (NV)
    //
    struct shadowsurfacedata_t                 
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t                   width;   //{ +0x0000    } | .Width
        _m01 uint32_t                   height;  //{ +0x0004    } | .Height
        _m02 enum kuser::d3dddiformat_t format;  //{ +0x0008    } | .Format
        _m03 uint32_t                   pitch;   //{ +0x000c    } | .Pitch
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_SHADOWSURFACEDATA.$", 0x0, false, 0x9fbc9e03f1542c52 );       
        SDK_FIXED_SIZE( shadowsurfacedata_t, 0x10 );       
    };                                         
};
#include "magic/shadowsurfacedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::shadowsurfacedata_t, 0x10 );
