#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _MARKER_TYPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct marker_type_t
    {                   
                        
        SDK_NONVOL_PROPERTIES( "_MARKER_TYPE.$", 0x10, true, 0x9691edc3603e634d );
        SDK_FIXED_SIZE( marker_type_t, 0x10 );
    };                  
};
SDK_VERIFY( struct wdf::marker_type_t, 0x10 );
