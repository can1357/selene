#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openallocationinfo2_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_OPENALLOCATIONINFO2]
    // => WDK 10 (NV)
    //
    struct openallocationinfo2_t                  
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t    h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 const void* p_private_driver_data;     //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t    private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
        _m03 uint64_t    gpu_virtual_address;       //{ +0x0018    } | .GpuVirtualAddress
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DDDI_OPENALLOCATIONINFO2.$", 0x0, false, 0xc7bbf261241a51b7 );                         
        SDK_FIXED_SIZE( openallocationinfo2_t, 0x50 );                         
    };                                            
};
#include "magic/openallocationinfo2_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::openallocationinfo2_t, 0x50 );
