#pragma once
#include <sdkgen/support_library.hpp>

namespace ex
{
    // [struct EX_BOOT_DEVICE_HANDLE__]
    // => WDK 10 (NV)
    //
    struct boot_device_handle_t
    {                          
                               
        SDK_NONVOL_PROPERTIES( "EX_BOOT_DEVICE_HANDLE__.$", 0x0, false, 0x5c04f1ac2891c4b4 );
        SDK_FIXED_SIZE( boot_device_handle_t, 0x4 );
    };                         
};
SDK_VERIFY( struct ex::boot_device_handle_t, 0x4 );
