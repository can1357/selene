#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_get_features_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_GET_FEATURES]
    // => Windows 11
    //
    union nvme_cdw10_get_features_t
    {                              
        // Windows 11          
        //                     
        _m00 uint8_t  fid;           //{ +0x0000@0  } | .FID
        _m01 uint3_t  sel;           //{ +0x0000@8  } | .SEL
        _m02 uint32_t as_ulong;      //{ +0x0000    } | .AsUlong
                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_GET_FEATURES.$", 0x0, false, 0x80dfcccc8537316d );         
        SDK_FIXED_SIZE( nvme_cdw10_get_features_t, 0x4 );         
    };                             
};
#include "magic/nvme_cdw10_get_features_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_get_features_t, 0x4 );
