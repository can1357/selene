#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFCOMPANIONTARGET__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcompaniontarget_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "WDFCOMPANIONTARGET__.$", 0x4, true, 0x7137e8673f89f697 );
        SDK_FIXED_SIZE( wdfcompaniontarget_t, 0x4 );
    };                         
};
SDK_VERIFY( struct wdf::wdfcompaniontarget_t, 0x4 );
