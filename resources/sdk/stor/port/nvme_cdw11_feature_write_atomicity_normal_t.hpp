#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_write_atomicity_normal_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_WRITE_ATOMICITY_NORMAL]
    // => Windows 11
    //
    union nvme_cdw11_feature_write_atomicity_normal_t
    {                                                
        // Windows 11          
        //                     
        _m00 uint1_t  dn;                              //{ +0x0000@0  } | .DN
        _m01 uint32_t as_ulong;                        //{ +0x0000    } | .AsUlong
                                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_WRITE_ATOMICITY_NORMAL.$", 0x0, false, 0x4c93fbe1f4b707d2 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_write_atomicity_normal_t, 0x4 );         
    };                                               
};
#include "magic/nvme_cdw11_feature_write_atomicity_normal_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_write_atomicity_normal_t, 0x4 );
