#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_dataset_management_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_DATASET_MANAGEMENT]
    // => Windows 11
    //
    union nvme_cdw11_dataset_management_t
    {                                    
        // Windows 11          
        //                     
        _m00 uint1_t  idr;                 //{ +0x0000@0  } | .IDR
        _m01 uint1_t  idw;                 //{ +0x0000@1  } | .IDW
        _m02 uint1_t  ad;                  //{ +0x0000@2  } | .AD
        _m03 uint32_t as_ulong;            //{ +0x0000    } | .AsUlong
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_DATASET_MANAGEMENT.$", 0x0, false, 0xb89cffb52c39bfc9 );         
        SDK_FIXED_SIZE( nvme_cdw11_dataset_management_t, 0x4 );         
    };                                   
};
#include "magic/nvme_cdw11_dataset_management_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_dataset_management_t, 0x4 );
