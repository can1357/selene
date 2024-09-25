#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PHYSICAL_DEVICES]
    // => WDK 10
    //
    struct scm_physical_devices_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_SCM_PHYSICAL_DEVICES.$", 0x0, false, 0xcb72ed4c3fb45904 );
        SDK_FIXED_SIZE( scm_physical_devices_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::scm_physical_devices_t, 0x0 );
