#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/synchronizationobjectinfo_t.hpp"

#include "magic/createsynchronizationobject_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT]
    // => WDK 10 (NV)
    //
    struct createsynchronizationobject_t                                
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                                     h_device;       //{ +0x0000    } | .hDevice
        _m01 struct d3d::ddi::synchronizationobjectinfo_t info;           //{ +0x0004    } | .Info
        _m02 uint32_t                                     h_sync_object;  //{ +0x0048    } | .hSyncObject
                                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATESYNCHRONIZATIONOBJECT.$", 0x0, false, 0xc158669b25adb65e );              
        SDK_FIXED_SIZE( createsynchronizationobject_t, 0x4c );              
    };                                                                  
};
#include "magic/createsynchronizationobject_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createsynchronizationobject_t, 0x4c );
