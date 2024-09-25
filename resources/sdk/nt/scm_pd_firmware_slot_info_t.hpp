#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_FIRMWARE_SLOT_INFO]
    // => WDK 10
    //
    struct scm_pd_firmware_slot_info_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_SCM_PD_FIRMWARE_SLOT_INFO.$", 0x0, false, 0xc16ed9476aad7f39 );
        SDK_FIXED_SIZE( scm_pd_firmware_slot_info_t, 0x0 );
    };                                
};
SDK_VERIFY( struct nt::scm_pd_firmware_slot_info_t, 0x0 );
