#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wudf_timer_t.start.hpp"
namespace wdf
{
    // [struct WUDF_TIMER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_timer_t  
    {                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* value;  //{ +0x0000    +0x0000    +0x0000    } | .Value
                         
        SDK_MAGIC_PROPERTIES( "WUDF_TIMER.$", 0x8, true, 0xf8f426a1bb7cb64e );      
        SDK_FIXED_SIZE( wudf_timer_t, 0x8 );      
    };                   
};
#include "magic/wudf_timer_t.end.hpp"
SDK_VERIFY( struct wdf::wudf_timer_t, 0x8 );
