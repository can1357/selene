#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFUSBDEVICE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfusbdevice_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "WDFUSBDEVICE__.$", 0x4, true, 0xd9e4a76b8e28eab0 );
        SDK_FIXED_SIZE( wdfusbdevice_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::wdfusbdevice_t, 0x4 );
