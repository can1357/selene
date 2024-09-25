#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_temperature_threshold_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD]
    // => Windows 11
    //
    union nvme_cdw11_feature_temperature_threshold_t
    {                                               
        // Windows 11          
        //                     
        _m00 uint16_t tmpth;                          //{ +0x0000@0  } | .TMPTH
        _m01 uint4_t  tmpsel;                         //{ +0x0000@16 } | .TMPSEL
        _m02 uint2_t  thsel;                          //{ +0x0000@20 } | .THSEL
        _m03 uint32_t as_ulong;                       //{ +0x0000    } | .AsUlong
                                                    
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD.$", 0x0, false, 0xcf3139a507a2593a );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_temperature_threshold_t, 0x4 );         
    };                                              
};
#include "magic/nvme_cdw11_feature_temperature_threshold_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_temperature_threshold_t, 0x4 );
