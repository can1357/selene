#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setcontextinprocessschedulingpriority_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY]
    // => WDK 10 (NV)
    //
    struct setcontextinprocessschedulingpriority_t
    {                                             
        // WDK 10               
        //                      
        _m00 uint32_t h_context;                    //{ +0x0000    } | .hContext
        _m01 int32_t  priority;                     //{ +0x0004    } | .Priority
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY.$", 0x0, false, 0xb8a624cca12146c0 );          
        SDK_FIXED_SIZE( setcontextinprocessschedulingpriority_t, 0x8 );          
    };                                            
};
#include "magic/setcontextinprocessschedulingpriority_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setcontextinprocessschedulingpriority_t, 0x8 );
