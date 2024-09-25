#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unlock_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_UNLOCK]
    // => WDK 10 (NV)
    //
    struct unlock_t                          
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t        h_device;         //{ +0x0000    } | .hDevice
        _m01 uint32_t        num_allocations;  //{ +0x0004    } | .NumAllocations
        _m02 const uint32_t* ph_allocations;   //{ +0x0008    } | .phAllocations
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UNLOCK.$", 0x0, false, 0x1cfa07820ccbed26 );                
        SDK_FIXED_SIZE( unlock_t, 0x10 );                
    };                                       
};
#include "magic/unlock_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::unlock_t, 0x10 );
