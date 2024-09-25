#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flipoverlay_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLIPOVERLAY]
    // => WDK 10 (NV)
    //
    struct flipoverlay_t                       
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t h_device;                  //{ +0x0000    } | .hDevice
        _m01 uint32_t h_overlay;                 //{ +0x0004    } | .hOverlay
        _m02 uint32_t h_source;                  //{ +0x0008    } | .hSource
        _m03 void*    p_private_driver_data;     //{ +0x0010    } | .pPrivateDriverData
        _m04 uint32_t private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPOVERLAY.$", 0x0, false, 0x92ade1e41c147b61 );                         
        SDK_FIXED_SIZE( flipoverlay_t, 0x20 );                         
    };                                         
};
#include "magic/flipoverlay_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::flipoverlay_t, 0x20 );
