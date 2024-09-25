#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_firmware_activate_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_FIRMWARE_ACTIVATE]
    // => Windows 11
    //
    union nvme_cdw10_firmware_activate_t
    {                                   
        // Windows 11          
        //                     
        _m00 uint3_t  fs;                 //{ +0x0000@0  } | .FS
        _m01 uint2_t  aa;                 //{ +0x0000@3  } | .AA
        _m02 uint32_t as_ulong;           //{ +0x0000    } | .AsUlong
                                        
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_FIRMWARE_ACTIVATE.$", 0x0, false, 0x5cc03c8a717c570a );         
        SDK_FIXED_SIZE( nvme_cdw10_firmware_activate_t, 0x4 );         
    };                                  
};
#include "magic/nvme_cdw10_firmware_activate_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_firmware_activate_t, 0x4 );
