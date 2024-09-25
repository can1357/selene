#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opensynchronizationobject_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT]
    // => WDK 10 (NV)
    //
    struct opensynchronizationobject_t
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t h_shared_handle;  //{ +0x0000    } | .hSharedHandle
        _m01 uint32_t h_sync_object;    //{ +0x0004    } | .hSyncObject
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENSYNCHRONIZATIONOBJECT.$", 0x0, false, 0xcf7a6014f6d27e38 );                
        SDK_FIXED_SIZE( opensynchronizationobject_t, 0x48 );                
    };                                
};
#include "magic/opensynchronizationobject_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::opensynchronizationobject_t, 0x48 );
