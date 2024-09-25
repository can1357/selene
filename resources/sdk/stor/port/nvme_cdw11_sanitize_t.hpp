#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_sanitize_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_SANITIZE]
    // => Windows 11
    //
    union nvme_cdw11_sanitize_t
    {                          
        // Windows 11          
        //                     
        _m00 uint32_t ovrpat;    //{ +0x0000    } | .OVRPAT
        _m01 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_SANITIZE.$", 0x0, false, 0x6898120fadf1d6cd );         
        SDK_FIXED_SIZE( nvme_cdw11_sanitize_t, 0x4 );         
    };                         
};
#include "magic/nvme_cdw11_sanitize_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_sanitize_t, 0x4 );
