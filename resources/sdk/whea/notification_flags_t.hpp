#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_NOTIFICATION_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union notification_flags_t                       
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  poll_interval_rw;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PollIntervalRW
        _m01 uint1_t  switch_to_polling_threshold_rw;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .SwitchToPollingThresholdRW
        _m02 uint1_t  switch_to_polling_window_rw;     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .SwitchToPollingWindowRW
        _m03 uint1_t  error_threshold_rw;              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ErrorThresholdRW
        _m04 uint1_t  error_threshold_window_rw;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ErrorThresholdWindowRW
        _m05 uint16_t as_ushort;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_FLAGS.$", 0x2, true, 0xfc55d2596cdb92fb );                               
        SDK_FIXED_SIZE( notification_flags_t, 0x2 );                               
    };                                               
};
#include "magic/notification_flags_t.end.hpp"
SDK_VERIFY( union whea::notification_flags_t, 0x2 );
