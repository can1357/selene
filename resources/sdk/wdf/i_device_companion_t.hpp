#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct IDeviceCompanion]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_device_companion_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IDeviceCompanion.$", 0x8, true, 0xadad9a28a2f499a8 );
        SDK_FIXED_SIZE( i_device_companion_t, 0x8 );
    };                         
};
SDK_VERIFY( struct wdf::i_device_companion_t, 0x8 );
