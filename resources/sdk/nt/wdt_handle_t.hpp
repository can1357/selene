#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _WDT_HANDLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdt_handle_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_WDT_HANDLE.$", 0x1, true, 0xc888bf17c7c975fd );
        SDK_FIXED_SIZE( wdt_handle_t, 0x1 );
    };                 
};
SDK_VERIFY( struct nt::wdt_handle_t, 0x1 );
