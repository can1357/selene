#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_lock2flags_t.hpp"

#include "magic/lock2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_LOCK2]
    // => WDK 10 (NV)
    //
    struct lock2_t                                         
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint32_t                         h_device;      //{ +0x0000    } | .hDevice
        _m01 uint32_t                         h_allocation;  //{ +0x0004    } | .hAllocation
        _m02 struct nt::d3dddicb_lock2flags_t flags;         //{ +0x0008    } | .Flags
        _m03 void*                            p_data;        //{ +0x0010    } | .pData
                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_LOCK2.$", 0x0, false, 0x2ba1d5f656c6e3b2 );             
        SDK_FIXED_SIZE( lock2_t, 0x18 );                   
    };                                                     
};
#include "magic/lock2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::lock2_t, 0x18 );
