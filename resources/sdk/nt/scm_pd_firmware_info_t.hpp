#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_FIRMWARE_INFO]
    // => WDK 10
    //
    struct scm_pd_firmware_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_SCM_PD_FIRMWARE_INFO.$", 0x0, false, 0xd61afd90a9cc7c1c );
        SDK_FIXED_SIZE( scm_pd_firmware_info_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::scm_pd_firmware_info_t, 0x0 );
