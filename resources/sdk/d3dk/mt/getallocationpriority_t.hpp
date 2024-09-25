#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getallocationpriority_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETALLOCATIONPRIORITY]
    // => WDK 10 (NV)
    //
    struct getallocationpriority_t              
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t        h_device;            //{ +0x0000    } | .hDevice
        _m01 uint32_t        h_resource;          //{ +0x0004    } | .hResource
        _m02 const uint32_t* ph_allocation_list;  //{ +0x0008    } | .phAllocationList
        _m03 uint32_t        allocation_count;    //{ +0x0010    } | .AllocationCount
        _m04 uint32_t*       p_priorities;        //{ +0x0018    } | .pPriorities
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETALLOCATIONPRIORITY.$", 0x0, false, 0x36429e0ebe0bb89e );                   
        SDK_FIXED_SIZE( getallocationpriority_t, 0x20 );                   
    };                                          
};
#include "magic/getallocationpriority_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getallocationpriority_t, 0x20 );
