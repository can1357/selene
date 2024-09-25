#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getcontextschedulingpriority_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETCONTEXTSCHEDULINGPRIORITY]
    // => WDK 10 (NV)
    //
    struct getcontextschedulingpriority_t
    {                                    
        // WDK 10               
        //                      
        _m00 uint32_t h_context;           //{ +0x0000    } | .hContext
        _m01 int32_t  priority;            //{ +0x0004    } | .Priority
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETCONTEXTSCHEDULINGPRIORITY.$", 0x0, false, 0x949e3b9eeb3f69a9 );          
        SDK_FIXED_SIZE( getcontextschedulingpriority_t, 0x8 );          
    };                                   
};
#include "magic/getcontextschedulingpriority_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getcontextschedulingpriority_t, 0x8 );
