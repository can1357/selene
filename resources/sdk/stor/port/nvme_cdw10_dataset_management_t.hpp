#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_dataset_management_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_DATASET_MANAGEMENT]
    // => Windows 11
    //
    union nvme_cdw10_dataset_management_t
    {                                    
        // Windows 11          
        //                     
        _m00 uint8_t  nr;                  //{ +0x0000@0  } | .NR
        _m01 uint32_t as_ulong;            //{ +0x0000    } | .AsUlong
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_DATASET_MANAGEMENT.$", 0x0, false, 0x3966e1792dbc2c39 );         
        SDK_FIXED_SIZE( nvme_cdw10_dataset_management_t, 0x4 );         
    };                                   
};
#include "magic/nvme_cdw10_dataset_management_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_dataset_management_t, 0x4 );
