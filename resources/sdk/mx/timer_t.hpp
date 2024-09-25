#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/md_timer_t.hpp"

#include "magic/timer_t.start.hpp"
namespace mx
{
    // [class MxTimer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class timer_t                           
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 struct wdf::md_timer_t m_timer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Timer
                                            
        SDK_MAGIC_PROPERTIES( "MxTimer.$", 0x98, true, 0x8b856f49fdf80db8 );        
        SDK_FIXED_SIZE( timer_t, 0x98 );        
    };                                      
};
#include "magic/timer_t.end.hpp"
SDK_VERIFY( class mx::timer_t, 0x98 );
