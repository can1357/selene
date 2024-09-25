#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WUDF_CREATE_CONTEXT__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_create_context_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "WUDF_CREATE_CONTEXT__.$", 0x4, true, 0xf5f91d0f063dc630 );
        SDK_FIXED_SIZE( wudf_create_context_t, 0x4 );
    };                          
};
SDK_VERIFY( struct wdf::wudf_create_context_t, 0x4 );
