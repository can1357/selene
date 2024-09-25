#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_LOGICAL_DEVICES]
    // => WDK 10
    //
    struct scm_logical_devices_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_SCM_LOGICAL_DEVICES.$", 0x0, false, 0x4000ea1e75fc0142 );
        SDK_FIXED_SIZE( scm_logical_devices_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::scm_logical_devices_t, 0x0 );
