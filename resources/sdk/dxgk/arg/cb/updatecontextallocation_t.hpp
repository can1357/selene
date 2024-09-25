#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/updatecontextallocation_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_UPDATECONTEXTALLOCATION]
    // => WDK 10 (NV)
    //
    struct updatecontextallocation_t           
    {                                          
        // WDK 10                              
        //                                     
        _m00 void*    h_allocation;              //{ +0x0000    } | .hAllocation
        _m01 void*    p_private_driver_data;     //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
                                               
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_UPDATECONTEXTALLOCATION.$", 0x0, false, 0xae4c9266811aa68 );                         
        SDK_FIXED_SIZE( updatecontextallocation_t, 0x18 );                         
    };                                         
};
#include "magic/updatecontextallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::updatecontextallocation_t, 0x18 );
