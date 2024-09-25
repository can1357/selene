#pragma once
#include <sdkgen/support_library.hpp>
#include "hidsm_event_t.hpp"

#include "magic/event_t.start.hpp"
namespace hid
{
    // [union _EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union event_t                                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                event_as_ulong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventAsUlong
        _m01 enum hid::hidsm_event_t hidsm_event;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HidsmEvent
                                                    
        SDK_MAGIC_PROPERTIES( "_EVENT.$", 0x4, true, 0x82bbacdef1e29102 );               
        SDK_FIXED_SIZE( event_t, 0x4 );               
    };                                              
};
#include "magic/event_t.end.hpp"
SDK_VERIFY( union hid::event_t, 0x4 );
