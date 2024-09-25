#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stagingsurfacedata_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_STAGINGSURFACEDATA]
    // => WDK 10 (NV)
    //
    struct stagingsurfacedata_t
    {                          
        // WDK 10            
        //                   
        _m00 uint32_t width;     //{ +0x0000    } | .Width
        _m01 uint32_t height;    //{ +0x0004    } | .Height
        _m02 uint32_t pitch;     //{ +0x0008    } | .Pitch
                               
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_STAGINGSURFACEDATA.$", 0x0, false, 0x8cc34467424846ec );       
        SDK_FIXED_SIZE( stagingsurfacedata_t, 0xc );       
    };                         
};
#include "magic/stagingsurfacedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::stagingsurfacedata_t, 0xc );
