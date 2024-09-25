#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_WDF_CX_DRIVER_CONTEXT__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdf_cx_driver_context_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "NDIS_WDF_CX_DRIVER_CONTEXT__.$", 0x4, true, 0x40a611c3c127ce9d );
        SDK_FIXED_SIZE( wdf_cx_driver_context_t, 0x4 );
    };                            
};
SDK_VERIFY( struct ndis::wdf_cx_driver_context_t, 0x4 );
