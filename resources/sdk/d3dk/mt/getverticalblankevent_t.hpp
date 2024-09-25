#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getverticalblankevent_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETVERTICALBLANKEVENT]
    // => WDK 10 (NV)
    //
    struct getverticalblankevent_t     
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t h_device;          //{ +0x0004    } | .hDevice
        _m02 uint32_t vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
        _m03 void**   ph_event;          //{ +0x0010    } | .phEvent
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETVERTICALBLANKEVENT.$", 0x0, false, 0xb284e6128defd888 );                 
        SDK_FIXED_SIZE( getverticalblankevent_t, 0x18 );                 
    };                                 
};
#include "magic/getverticalblankevent_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getverticalblankevent_t, 0x18 );
