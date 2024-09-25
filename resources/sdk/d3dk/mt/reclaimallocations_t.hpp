#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reclaimallocations_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_RECLAIMALLOCATIONS]
    // => WDK 10 (NV)
    //
    struct reclaimallocations_t              
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t        h_device;         //{ +0x0000    } | .hDevice
        _m01 uint32_t*       p_resources;      //{ +0x0008    } | .pResources
        _m02 const uint32_t* handle_list;      //{ +0x0010    } | .HandleList
        _m03 int32_t*        p_discarded;      //{ +0x0018    } | .pDiscarded
        _m04 uint32_t        num_allocations;  //{ +0x0020    } | .NumAllocations
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_RECLAIMALLOCATIONS.$", 0x0, false, 0xc2efc7f81388ca22 );                
        SDK_FIXED_SIZE( reclaimallocations_t, 0x28 );                
    };                                       
};
#include "magic/reclaimallocations_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::reclaimallocations_t, 0x28 );
