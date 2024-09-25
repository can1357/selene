#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_FIRMWARE_DOWNLOAD]
    // => WDK 10
    //
    struct scm_pd_firmware_download_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "_SCM_PD_FIRMWARE_DOWNLOAD.$", 0x0, false, 0x34b9c5822ffca23a );
        SDK_FIXED_SIZE( scm_pd_firmware_download_t, 0x0 );
    };                               
};
SDK_VERIFY( struct nt::scm_pd_firmware_download_t, 0x0 );
