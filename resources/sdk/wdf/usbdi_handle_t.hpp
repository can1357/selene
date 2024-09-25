#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct USBDI_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbdi_handle_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "USBDI_HANDLE__.$", 0x4, true, 0x3380492bf22267fe );
        SDK_FIXED_SIZE( usbdi_handle_t, 0x4 );
    };                   
};
SDK_VERIFY( struct wdf::usbdi_handle_t, 0x4 );
