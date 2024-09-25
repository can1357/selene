#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getgpupartitioninfo_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETGPUPARTITIONINFO]
    // => WDK 10 (NV)
    //
    struct getgpupartitioninfo_t                   
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t  num_gpu_partition_options;    //{ +0x0000    } | .NumGpuPartitionOptions
        _m01 uint16_t* p_gpu_partition_options;      //{ +0x0008    } | .pGpuPartitionOptions
        _m02 uint16_t  current_gpu_partition_count;  //{ +0x0010    } | .CurrentGpuPartitionCount
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETGPUPARTITIONINFO.$", 0x0, false, 0xc2d109882f887713 );                            
        SDK_FIXED_SIZE( getgpupartitioninfo_t, 0x18 );                            
    };                                             
};
#include "magic/getgpupartitioninfo_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getgpupartitioninfo_t, 0x18 );
