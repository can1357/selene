#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_DEVICE_INFO]
    // => WDK 10
    //
    struct scm_pd_device_info_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "_SCM_PD_DEVICE_INFO.$", 0x0, false, 0xe1ff0ab2a45e055a );
        SDK_FIXED_SIZE( scm_pd_device_info_t, 0x0 );
    };                         
};
SDK_VERIFY( struct nt::scm_pd_device_info_t, 0x0 );
