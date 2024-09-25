#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_set_host_metadata_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_SET_HOST_METADATA]
    // => Windows 11
    //
    union nvme_cdw11_feature_set_host_metadata_t
    {                                           
        // Windows 11          
        //                     
        _m00 uint2_t  ea;                         //{ +0x0000@13 } | .EA
        _m01 uint32_t as_ulong;                   //{ +0x0000    } | .AsUlong
                                                
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_SET_HOST_METADATA.$", 0x0, false, 0x19197daf614530e1 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_set_host_metadata_t, 0x4 );         
    };                                          
};
#include "magic/nvme_cdw11_feature_set_host_metadata_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_set_host_metadata_t, 0x4 );
