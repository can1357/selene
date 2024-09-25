#pragma once
#include <sdkgen/support_library.hpp>

namespace video
{
    // [struct _VIDEO_DEBUG_REPORT]
    // => WDK 10
    //
    struct debug_report_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_VIDEO_DEBUG_REPORT.$", 0x0, false, 0x7055f5bfeb612408 );
        SDK_FIXED_SIZE( debug_report_t, 0x0 );
    };                   
};
SDK_VERIFY( struct video::debug_report_t, 0x0 );
