#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/suspendvirtualgpu_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SUSPENDVIRTUALGPU]
    // => WDK 10 (NV)
    //
    struct suspendvirtualgpu_t     
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t partition_id;  //{ +0x0000    } | .PartitionId
                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SUSPENDVIRTUALGPU.$", 0x0, false, 0xb9d3d89777e1f64a );             
        SDK_FIXED_SIZE( suspendvirtualgpu_t, 0x4 );             
    };                             
};
#include "magic/suspendvirtualgpu_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::suspendvirtualgpu_t, 0x4 );
