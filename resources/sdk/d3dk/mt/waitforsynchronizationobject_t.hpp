#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforsynchronizationobject_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT]
    // => WDK 10 (NV)
    //
    struct waitforsynchronizationobject_t                 
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t                 h_context;            //{ +0x0000    } | .hContext
        _m01 uint32_t                 object_count;         //{ +0x0004    } | .ObjectCount
        _m02 sdk::array<uint32_t, 32> object_handle_array;  //{ +0x0008    } | .ObjectHandleArray
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT.$", 0x0, false, 0xcf8fa70d38557b05 );                    
        SDK_FIXED_SIZE( waitforsynchronizationobject_t, 0x88 );                    
    };                                                    
};
#include "magic/waitforsynchronizationobject_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforsynchronizationobject_t, 0x88 );
