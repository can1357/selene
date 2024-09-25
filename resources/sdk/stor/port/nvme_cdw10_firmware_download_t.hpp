#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_firmware_download_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW10_FIRMWARE_DOWNLOAD]
    // => Windows 11
    //
    struct nvme_cdw10_firmware_download_t
    {                                    
        // Windows 11      
        //                 
        _m00 uint32_t numd;                //{ +0x0000    } | .NUMD
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_FIRMWARE_DOWNLOAD.$", 0x0, false, 0xb7c7c8130936150e );     
        SDK_FIXED_SIZE( nvme_cdw10_firmware_download_t, 0x4 );     
    };                                   
};
#include "magic/nvme_cdw10_firmware_download_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw10_firmware_download_t, 0x4 );
