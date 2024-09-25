#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setallocationpriority_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETALLOCATIONPRIORITY]
    // => WDK 10 (NV)
    //
    struct setallocationpriority_t              
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t        h_device;            //{ +0x0000    } | .hDevice
        _m01 uint32_t        h_resource;          //{ +0x0004    } | .hResource
        _m02 const uint32_t* ph_allocation_list;  //{ +0x0008    } | .phAllocationList
        _m03 uint32_t        allocation_count;    //{ +0x0010    } | .AllocationCount
        _m04 const uint32_t* p_priorities;        //{ +0x0018    } | .pPriorities
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETALLOCATIONPRIORITY.$", 0x0, false, 0x300a3e6672f0cced );                   
        SDK_FIXED_SIZE( setallocationpriority_t, 0x20 );                   
    };                                          
};
#include "magic/setallocationpriority_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setallocationpriority_t, 0x20 );
