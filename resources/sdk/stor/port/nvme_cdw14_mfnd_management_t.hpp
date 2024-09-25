#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw14_mfnd_management_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW14_MFND_MANAGEMENT]
    // => Windows 11
    //
    union nvme_cdw14_mfnd_management_t
    {                                 
        // Windows 11          
        //                     
        _m00 uint8_t  ccc;              //{ +0x0000@0  } | .CCC
        _m01 uint32_t as_ulong;         //{ +0x0000    } | .AsUlong
                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW14_MFND_MANAGEMENT.$", 0x0, false, 0x2ed9b8df00dd5d3c );         
        SDK_FIXED_SIZE( nvme_cdw14_mfnd_management_t, 0x4 );         
    };                                
};
#include "magic/nvme_cdw14_mfnd_management_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw14_mfnd_management_t, 0x4 );
