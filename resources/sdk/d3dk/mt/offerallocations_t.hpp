#pragma once
#include <sdkgen/support_library.hpp>
#include "offer_flags_t.hpp"
#include "offer_priority_t.hpp"

#include "magic/offerallocations_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OFFERALLOCATIONS]
    // => WDK 10 (NV)
    //
    struct offerallocations_t                                
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                        h_device;         //{ +0x0000    } | .hDevice
        _m01 uint32_t*                       p_resources;      //{ +0x0008    } | .pResources
        _m02 const uint32_t*                 handle_list;      //{ +0x0010    } | .HandleList
        _m03 uint32_t                        num_allocations;  //{ +0x0018    } | .NumAllocations
        _m04 enum d3dk::mt::offer_priority_t priority;         //{ +0x001c    } | .Priority
        _m05 struct d3dk::mt::offer_flags_t  flags;            //{ +0x0020    } | .Flags
                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OFFERALLOCATIONS.$", 0x0, false, 0x1021d8b8b539e09f );                
        SDK_FIXED_SIZE( offerallocations_t, 0x28 );                
    };                                                       
};
#include "magic/offerallocations_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::offerallocations_t, 0x28 );
