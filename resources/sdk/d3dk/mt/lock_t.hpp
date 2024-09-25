#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddicb_lockflags_t.hpp"

#include "magic/lock_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_LOCK]
    // => WDK 10 (NV)
    //
    struct lock_t                                                
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                        h_device;             //{ +0x0000    } | .hDevice
        _m01 uint32_t                        h_allocation;         //{ +0x0004    } | .hAllocation
        _m02 uint32_t                        private_driver_data;  //{ +0x0008    } | .PrivateDriverData
        _m03 uint32_t                        num_pages;            //{ +0x000c    } | .NumPages
        _m04 const uint32_t*                 p_pages;              //{ +0x0010    } | .pPages
        _m05 void*                           p_data;               //{ +0x0018    } | .pData
        _m06 struct nt::d3dddicb_lockflags_t flags;                //{ +0x0020    } | .Flags
        _m07 uint64_t                        gpu_virtual_address;  //{ +0x0028    } | .GpuVirtualAddress
                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_LOCK.$", 0x0, false, 0xe0a85d9811b6dda6 );                    
        SDK_FIXED_SIZE( lock_t, 0x30 );                          
    };                                                           
};
#include "magic/lock_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::lock_t, 0x30 );
