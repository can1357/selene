#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_host_memory_buffer_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER]
    // => Windows 11
    //
    union nvme_cdw11_feature_host_memory_buffer_t
    {                                            
        // Windows 11          
        //                     
        _m00 uint1_t  ehm;                         //{ +0x0000@0  } | .EHM
        _m01 uint1_t  mr;                          //{ +0x0000@1  } | .MR
        _m02 uint32_t as_ulong;                    //{ +0x0000    } | .AsUlong
                                                 
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER.$", 0x0, false, 0xc2a622bda6cb92e6 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_host_memory_buffer_t, 0x4 );         
    };                                           
};
#include "magic/nvme_cdw11_feature_host_memory_buffer_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_host_memory_buffer_t, 0x4 );
