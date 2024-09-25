#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw12_feature_host_memory_buffer_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW12_FEATURE_HOST_MEMORY_BUFFER]
    // => Windows 11
    //
    union nvme_cdw12_feature_host_memory_buffer_t
    {                                            
        // Windows 11          
        //                     
        _m00 uint32_t hsize;                       //{ +0x0000    } | .HSIZE
        _m01 uint32_t as_ulong;                    //{ +0x0000    } | .AsUlong
                                                 
        SDK_MAGIC_PROPERTIES( "NVME_CDW12_FEATURE_HOST_MEMORY_BUFFER.$", 0x0, false, 0x69c90ae2afa6088 );         
        SDK_FIXED_SIZE( nvme_cdw12_feature_host_memory_buffer_t, 0x4 );         
    };                                           
};
#include "magic/nvme_cdw12_feature_host_memory_buffer_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw12_feature_host_memory_buffer_t, 0x4 );
