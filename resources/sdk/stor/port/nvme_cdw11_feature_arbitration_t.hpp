#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_arbitration_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_ARBITRATION]
    // => Windows 11
    //
    union nvme_cdw11_feature_arbitration_t
    {                                     
        // Windows 11          
        //                     
        _m00 uint3_t  ab;                   //{ +0x0000@0  } | .AB
        _m01 uint8_t  lpw;                  //{ +0x0000@8  } | .LPW
        _m02 uint8_t  mpw;                  //{ +0x0000@16 } | .MPW
        _m03 uint8_t  hpw;                  //{ +0x0000@24 } | .HPW
        _m04 uint32_t as_ulong;             //{ +0x0000    } | .AsUlong
                                          
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_ARBITRATION.$", 0x0, false, 0x1bcea7e6c521c195 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_arbitration_t, 0x4 );         
    };                                    
};
#include "magic/nvme_cdw11_feature_arbitration_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_arbitration_t, 0x4 );
