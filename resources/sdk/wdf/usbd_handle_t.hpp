#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct USBD_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_handle_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "USBD_HANDLE__.$", 0x4, true, 0xd999647c1a0da2d0 );
        SDK_FIXED_SIZE( usbd_handle_t, 0x4 );
    };                  
};
SDK_VERIFY( struct wdf::usbd_handle_t, 0x4 );
