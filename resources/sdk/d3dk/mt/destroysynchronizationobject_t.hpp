#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroysynchronizationobject_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT]
    // => WDK 10 (NV)
    //
    struct destroysynchronizationobject_t
    {                                    
        // WDK 10                   
        //                          
        _m00 uint32_t h_sync_object;       //{ +0x0000    } | .hSyncObject
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT.$", 0x0, false, 0xc1f2a3f66f0ac6f9 );              
        SDK_FIXED_SIZE( destroysynchronizationobject_t, 0x4 );              
    };                                   
};
#include "magic/destroysynchronizationobject_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroysynchronizationobject_t, 0x4 );
