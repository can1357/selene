#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WUDF_DEVICE_CONTEXT__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_device_context_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "WUDF_DEVICE_CONTEXT__.$", 0x4, true, 0x118c0e55e3bf10e );
        SDK_FIXED_SIZE( wudf_device_context_t, 0x4 );
    };                          
};
SDK_VERIFY( struct wdf::wudf_device_context_t, 0x4 );
