#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforverticalblankevent_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORVERTICALBLANKEVENT]
    // => WDK 10 (NV)
    //
    struct waitforverticalblankevent_t 
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t h_device;          //{ +0x0004    } | .hDevice
        _m02 uint32_t vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORVERTICALBLANKEVENT.$", 0x0, false, 0x9e8aa7c3aaf51a3a );                 
        SDK_FIXED_SIZE( waitforverticalblankevent_t, 0xc );                 
    };                                 
};
#include "magic/waitforverticalblankevent_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforverticalblankevent_t, 0xc );
