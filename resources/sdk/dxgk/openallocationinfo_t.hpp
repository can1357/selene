#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openallocationinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_OPENALLOCATIONINFO]
    // => WDK 10 (NV)
    //
    struct openallocationinfo_t                    
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t h_allocation;                  //{ +0x0000    } | .hAllocation
        _m01 void*    p_private_driver_data;         //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t private_driver_data_size;      //{ +0x0010    } | .PrivateDriverDataSize
        _m03 void*    h_device_specific_allocation;  //{ +0x0018    } | .hDeviceSpecificAllocation
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_OPENALLOCATIONINFO.$", 0x0, false, 0x7760a61dd04b0461 );                             
        SDK_FIXED_SIZE( openallocationinfo_t, 0x20 );                             
    };                                             
};
#include "magic/openallocationinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::openallocationinfo_t, 0x20 );
