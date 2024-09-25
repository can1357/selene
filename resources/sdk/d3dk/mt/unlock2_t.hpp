#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unlock2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_UNLOCK2]
    // => WDK 10 (NV)
    //
    struct unlock2_t               
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t h_device;      //{ +0x0000    } | .hDevice
        _m01 uint32_t h_allocation;  //{ +0x0004    } | .hAllocation
                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UNLOCK2.$", 0x0, false, 0x3a7ae942ee75ad2a );             
        SDK_FIXED_SIZE( unlock2_t, 0x8 );             
    };                             
};
#include "magic/unlock2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::unlock2_t, 0x8 );
