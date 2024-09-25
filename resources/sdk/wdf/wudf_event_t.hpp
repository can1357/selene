#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wudf_event_t.start.hpp"
namespace wdf
{
    // [struct WUDF_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudf_event_t  
    {                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* value;  //{ +0x0000    +0x0000    +0x0000    } | .Value
                         
        SDK_MAGIC_PROPERTIES( "WUDF_EVENT.$", 0x8, true, 0x840f80dff11aebb6 );      
        SDK_FIXED_SIZE( wudf_event_t, 0x8 );      
    };                   
};
#include "magic/wudf_event_t.end.hpp"
SDK_VERIFY( struct wdf::wudf_event_t, 0x8 );
