#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WUDF_DEVNODE_CONTEXT__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_devnode_context_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "WUDF_DEVNODE_CONTEXT__.$", 0x4, true, 0x579e7bbd81612c2b );
        SDK_FIXED_SIZE( wudf_devnode_context_t, 0x4 );
    };                           
};
SDK_VERIFY( struct wdf::wudf_devnode_context_t, 0x4 );
