#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_DEVICE_HANDLE]
    // => WDK 10
    //
    struct scm_pd_device_handle_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_SCM_PD_DEVICE_HANDLE.$", 0x0, false, 0xca6381ecb2f7c104 );
        SDK_FIXED_SIZE( scm_pd_device_handle_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::scm_pd_device_handle_t, 0x0 );
