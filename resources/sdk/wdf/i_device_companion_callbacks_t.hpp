#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct IDeviceCompanionCallbacks]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_device_companion_callbacks_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IDeviceCompanionCallbacks.$", 0x8, true, 0x8b31ccdbead40432 );
        SDK_FIXED_SIZE( i_device_companion_callbacks_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct wdf::i_device_companion_callbacks_t, 0x8 );
