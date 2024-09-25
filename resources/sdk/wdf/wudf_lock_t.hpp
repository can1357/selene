#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wudf_lock_t.start.hpp"
namespace wdf
{
    // [struct WUDF_LOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_lock_t   
    {                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* value;  //{ +0x0000    +0x0000    +0x0000    } | .Value
                         
        SDK_MAGIC_PROPERTIES( "WUDF_LOCK.$", 0x8, true, 0x922afda762da6266 );      
        SDK_FIXED_SIZE( wudf_lock_t, 0x8 );      
    };                   
};
#include "magic/wudf_lock_t.end.hpp"
SDK_VERIFY( struct wdf::wudf_lock_t, 0x8 );
