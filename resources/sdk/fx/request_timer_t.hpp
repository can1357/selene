#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/timer_t.hpp"

#include "magic/request_timer_t.start.hpp"
namespace fx
{
    // [struct FxRequestTimer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_timer_t           
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 class mx::timer_t timer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Timer
                                     
        SDK_MAGIC_PROPERTIES( "FxRequestTimer.$", 0x98, true, 0xd2f2f7a13b9423c6 );      
        SDK_FIXED_SIZE( request_timer_t, 0x98 );      
    };                               
};
#include "magic/request_timer_t.end.hpp"
SDK_VERIFY( struct fx::request_timer_t, 0x98 );
