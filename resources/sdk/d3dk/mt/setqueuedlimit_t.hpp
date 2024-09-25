#pragma once
#include <sdkgen/support_library.hpp>
#include "queuedlimit_type_t.hpp"

#include "magic/setqueuedlimit_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETQUEUEDLIMIT]
    // => WDK 10 (NV)
    //
    struct setqueuedlimit_t                                              
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                          h_device;                   //{ +0x0000    } | .hDevice
        _m01 enum d3dk::mt::queuedlimit_type_t type;                       //{ +0x0004    } | .Type
        _m02 uint32_t                          queued_present_limit;       //{ +0x0008    } | .QueuedPresentLimit
        _m03 uint32_t                          vid_pn_source_id;           //{ +0x0008    } | .VidPnSourceId
        _m04 uint32_t                          queued_pending_flip_limit;  //{ +0x000c    } | .QueuedPendingFlipLimit
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETQUEUEDLIMIT.$", 0x0, false, 0xf95d85183441c898 );                          
        SDK_FIXED_SIZE( setqueuedlimit_t, 0x10 );                          
    };                                                                   
};
#include "magic/setqueuedlimit_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setqueuedlimit_t, 0x10 );
