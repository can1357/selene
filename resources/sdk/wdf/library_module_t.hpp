#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _LIBRARY_MODULE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct library_module_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "_LIBRARY_MODULE.$", 0x0, true, 0x1f672350daba7c57 );
        SDK_FIXED_SIZE( library_module_t, 0x0 );
    };                     
};
SDK_VERIFY( struct wdf::library_module_t, 0x0 );
