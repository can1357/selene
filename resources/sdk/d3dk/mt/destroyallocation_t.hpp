#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyallocation_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYALLOCATION]
    // => WDK 10 (NV)
    //
    struct destroyallocation_t                  
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t        h_device;            //{ +0x0000    } | .hDevice
        _m01 uint32_t        h_resource;          //{ +0x0004    } | .hResource
        _m02 const uint32_t* ph_allocation_list;  //{ +0x0008    } | .phAllocationList
        _m03 uint32_t        allocation_count;    //{ +0x0010    } | .AllocationCount
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYALLOCATION.$", 0x0, false, 0x7914998284966cc0 );                   
        SDK_FIXED_SIZE( destroyallocation_t, 0x18 );                   
    };                                          
};
#include "magic/destroyallocation_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroyallocation_t, 0x18 );
