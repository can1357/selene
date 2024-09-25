#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setcontextschedulingpriority_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY]
    // => WDK 10 (NV)
    //
    struct setcontextschedulingpriority_t
    {                                    
        // WDK 10               
        //                      
        _m00 uint32_t h_context;           //{ +0x0000    } | .hContext
        _m01 int32_t  priority;            //{ +0x0004    } | .Priority
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY.$", 0x0, false, 0x46140803f23b51d4 );          
        SDK_FIXED_SIZE( setcontextschedulingpriority_t, 0x8 );          
    };                                   
};
#include "magic/setcontextschedulingpriority_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setcontextschedulingpriority_t, 0x8 );
