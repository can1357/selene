#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_get_host_metadata_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_GET_HOST_METADATA]
    // => Windows 11
    //
    union nvme_cdw11_feature_get_host_metadata_t
    {                                           
        // Windows 11          
        //                     
        _m00 uint1_t  gdhm;                       //{ +0x0000@0  } | .GDHM
        _m01 uint32_t as_ulong;                   //{ +0x0000    } | .AsUlong
                                                
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_GET_HOST_METADATA.$", 0x0, false, 0xb09ca9930d5988f6 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_get_host_metadata_t, 0x4 );         
    };                                          
};
#include "magic/nvme_cdw11_feature_get_host_metadata_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_get_host_metadata_t, 0x4 );
