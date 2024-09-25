#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opensyncobjectfromnthandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE]
    // => WDK 10 (NV)
    //
    struct opensyncobjectfromnthandle_t
    {                                  
        // WDK 10                   
        //                          
        _m00 void*    h_nt_handle;       //{ +0x0000    } | .hNtHandle
        _m01 uint32_t h_sync_object;     //{ +0x0008    } | .hSyncObject
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE.$", 0x0, false, 0x6c68f7f71444039c );              
        SDK_FIXED_SIZE( opensyncobjectfromnthandle_t, 0x10 );              
    };                                 
};
#include "magic/opensyncobjectfromnthandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::opensyncobjectfromnthandle_t, 0x10 );
