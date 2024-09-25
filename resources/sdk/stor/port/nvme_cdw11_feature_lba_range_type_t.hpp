#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_lba_range_type_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_LBA_RANGE_TYPE]
    // => Windows 11
    //
    union nvme_cdw11_feature_lba_range_type_t
    {                                        
        // Windows 11          
        //                     
        _m00 uint6_t  num;                     //{ +0x0000@0  } | .NUM
        _m01 uint32_t as_ulong;                //{ +0x0000    } | .AsUlong
                                             
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_LBA_RANGE_TYPE.$", 0x0, false, 0x83d206acfb8eecaa );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_lba_range_type_t, 0x4 );         
    };                                       
};
#include "magic/nvme_cdw11_feature_lba_range_type_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_lba_range_type_t, 0x4 );
