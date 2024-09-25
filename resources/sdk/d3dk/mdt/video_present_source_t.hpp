#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/video_present_source_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDEO_PRESENT_SOURCE]
    // => WDK 10 (NV)
    //
    struct video_present_source_t 
    {                             
        // WDK 10                 
        //                        
        _m00 uint32_t id;           //{ +0x0000    } | .Id
        _m01 uint32_t dw_reserved;  //{ +0x0004    } | .dwReserved
                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDEO_PRESENT_SOURCE.$", 0x0, false, 0x2fdc9229c1a7a276 );            
        SDK_FIXED_SIZE( video_present_source_t, 0x8 );            
    };                            
};
#include "magic/video_present_source_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::video_present_source_t, 0x8 );
