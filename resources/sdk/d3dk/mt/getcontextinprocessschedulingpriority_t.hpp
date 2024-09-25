#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getcontextinprocessschedulingpriority_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY]
    // => WDK 10 (NV)
    //
    struct getcontextinprocessschedulingpriority_t
    {                                             
        // WDK 10               
        //                      
        _m00 uint32_t h_context;                    //{ +0x0000    } | .hContext
        _m01 int32_t  priority;                     //{ +0x0004    } | .Priority
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY.$", 0x0, false, 0xffdb6e5b8d24e8b5 );          
        SDK_FIXED_SIZE( getcontextinprocessschedulingpriority_t, 0x8 );          
    };                                            
};
#include "magic/getcontextinprocessschedulingpriority_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getcontextinprocessschedulingpriority_t, 0x8 );
