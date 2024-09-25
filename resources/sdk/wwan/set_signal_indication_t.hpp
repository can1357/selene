#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_signal_indication_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SET_SIGNAL_INDICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_signal_indication_t   
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t rssi_interval;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RssiInterval
        _m01 uint32_t rssi_threshold;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RssiThreshold
                                     
        SDK_MAGIC_PROPERTIES( "_WWAN_SET_SIGNAL_INDICATION.$", 0x8, true, 0xb5994600e218990 );               
        SDK_FIXED_SIZE( set_signal_indication_t, 0x8 );               
    };                               
};
#include "magic/set_signal_indication_t.end.hpp"
SDK_VERIFY( struct wwan::set_signal_indication_t, 0x8 );
