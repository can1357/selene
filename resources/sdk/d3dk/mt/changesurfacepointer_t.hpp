#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hdc_t; }

#include "magic/changesurfacepointer_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CHANGESURFACEPOINTER]
    // => WDK 10 (NV)
    //
    struct changesurfacepointer_t                 
    {                                             
        // WDK 10                                 
        //                                        
        _m00 struct win::hdc_t* h_dc;               //{ +0x0000    } | .hDC
        _m01 void*              h_bitmap;           //{ +0x0008    } | .hBitmap
        _m02 void*              p_surface_pointer;  //{ +0x0010    } | .pSurfacePointer
        _m03 uint32_t           width;              //{ +0x0018    } | .Width
        _m04 uint32_t           height;             //{ +0x001c    } | .Height
        _m05 uint32_t           pitch;              //{ +0x0020    } | .Pitch
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHANGESURFACEPOINTER.$", 0x0, false, 0xbdaa9cc6453460c4 );                  
        SDK_FIXED_SIZE( changesurfacepointer_t, 0x28 );                  
    };                                            
};
#include "magic/changesurfacepointer_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::changesurfacepointer_t, 0x28 );
