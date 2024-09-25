#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_destroyallocation2flags_t.hpp"

#include "magic/destroyallocation2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYALLOCATION2]
    // => WDK 10 (NV)
    //
    struct destroyallocation2_t                                               
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                      h_device;            //{ +0x0000    } | .hDevice
        _m01 uint32_t                                      h_resource;          //{ +0x0004    } | .hResource
        _m02 const uint32_t*                               ph_allocation_list;  //{ +0x0008    } | .phAllocationList
        _m03 uint32_t                                      allocation_count;    //{ +0x0010    } | .AllocationCount
        _m04 struct nt::d3dddicb_destroyallocation2flags_t flags;               //{ +0x0014    } | .Flags
                                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYALLOCATION2.$", 0x0, false, 0x543ba446b08cbe9a );                   
        SDK_FIXED_SIZE( destroyallocation2_t, 0x18 );                         
    };                                                                        
};
#include "magic/destroyallocation2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroyallocation2_t, 0x18 );
