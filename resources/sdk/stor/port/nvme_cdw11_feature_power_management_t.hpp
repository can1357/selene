#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_power_management_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_POWER_MANAGEMENT]
    // => Windows 11
    //
    union nvme_cdw11_feature_power_management_t
    {                                          
        // Windows 11          
        //                     
        _m00 uint5_t  ps;                        //{ +0x0000@0  } | .PS
        _m01 uint32_t as_ulong;                  //{ +0x0000    } | .AsUlong
                                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_POWER_MANAGEMENT.$", 0x0, false, 0xc5c89bd104e3b80e );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_power_management_t, 0x4 );         
    };                                         
};
#include "magic/nvme_cdw11_feature_power_management_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_power_management_t, 0x4 );
