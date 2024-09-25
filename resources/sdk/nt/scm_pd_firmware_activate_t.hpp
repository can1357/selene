#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_FIRMWARE_ACTIVATE]
    // => WDK 10
    //
    struct scm_pd_firmware_activate_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "_SCM_PD_FIRMWARE_ACTIVATE.$", 0x0, false, 0xd3230961c0be770d );
        SDK_FIXED_SIZE( scm_pd_firmware_activate_t, 0x0 );
    };                               
};
SDK_VERIFY( struct nt::scm_pd_firmware_activate_t, 0x0 );
