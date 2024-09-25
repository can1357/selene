#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/synchronizationobjectinfo2_t.hpp"

#include "magic/createsynchronizationobject2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2]
    // => WDK 10 (NV)
    //
    struct createsynchronizationobject2_t                                
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                                      h_device;       //{ +0x0000    } | .hDevice
        _m01 struct d3d::ddi::synchronizationobjectinfo2_t info;           //{ +0x0008    } | .Info
        _m02 uint32_t                                      h_sync_object;  //{ +0x0058    } | .hSyncObject
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATESYNCHRONIZATIONOBJECT2.$", 0x0, false, 0x45b3ab5b23132dbb );              
        SDK_FIXED_SIZE( createsynchronizationobject2_t, 0x60 );              
    };                                                                   
};
#include "magic/createsynchronizationobject2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createsynchronizationobject2_t, 0x60 );
