#pragma once
#include <sdkgen/support_library.hpp>
#include "allocationresidencystatus_t.hpp"

#include "magic/queryallocationresidency_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYALLOCATIONRESIDENCY]
    // => WDK 10 (NV)
    //
    struct queryallocationresidency_t                                       
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                                    h_device;            //{ +0x0000    } | .hDevice
        _m01 uint32_t                                    h_resource;          //{ +0x0004    } | .hResource
        _m02 const uint32_t*                             ph_allocation_list;  //{ +0x0008    } | .phAllocationList
        _m03 uint32_t                                    allocation_count;    //{ +0x0010    } | .AllocationCount
        _m04 enum d3dk::mt::allocationresidencystatus_t* p_residency_status;  //{ +0x0018    } | .pResidencyStatus
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYALLOCATIONRESIDENCY.$", 0x0, false, 0xae12866f1bdb18b3 );                   
        SDK_FIXED_SIZE( queryallocationresidency_t, 0x20 );                   
    };                                                                      
};
#include "magic/queryallocationresidency_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryallocationresidency_t, 0x20 );
