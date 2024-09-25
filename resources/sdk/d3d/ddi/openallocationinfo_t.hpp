#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openallocationinfo_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_OPENALLOCATIONINFO]
    // => WDK 10 (NV)
    //
    struct openallocationinfo_t                   
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t    h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 const void* p_private_driver_data;     //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t    private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DDDI_OPENALLOCATIONINFO.$", 0x0, false, 0xfa8febdf766f8589 );                         
        SDK_FIXED_SIZE( openallocationinfo_t, 0x18 );                         
    };                                            
};
#include "magic/openallocationinfo_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::openallocationinfo_t, 0x18 );
