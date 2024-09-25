#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforverticalblankevent2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORVERTICALBLANKEVENT2]
    // => WDK 10 (NV)
    //
    struct waitforverticalblankevent2_t               
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t             h_adapter;            //{ +0x0000    } | .hAdapter
        _m01 uint32_t             h_device;             //{ +0x0004    } | .hDevice
        _m02 uint32_t             vid_pn_source_id;     //{ +0x0008    } | .VidPnSourceId
        _m03 uint32_t             num_objects;          //{ +0x000c    } | .NumObjects
        _m04 sdk::array<void*, 8> object_handle_array;  //{ +0x0010    } | .ObjectHandleArray
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORVERTICALBLANKEVENT2.$", 0x0, false, 0xa89a49471b2606d6 );                    
        SDK_FIXED_SIZE( waitforverticalblankevent2_t, 0x50 );                    
    };                                                
};
#include "magic/waitforverticalblankevent2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforverticalblankevent2_t, 0x50 );
