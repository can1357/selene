#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_transport_characteristics_t.start.hpp"
namespace wdf
{
    // [struct _USB_TRANSPORT_CHARACTERISTICS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_transport_characteristics_t                       
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                       
        _m00 uint32_t version;                                     //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t transport_characteristics_flags;             //{ +0x0004    +0x0004    +0x0004    } | .TransportCharacteristicsFlags
        _m02 uint64_t current_roundtrip_latency_in_milli_seconds;  //{ +0x0008    +0x0008    +0x0008    } | .CurrentRoundtripLatencyInMilliSeconds
        _m03 uint64_t max_potential_bandwidth;                     //{ +0x0010    +0x0010    +0x0010    } | .MaxPotentialBandwidth
                                                                 
        SDK_MAGIC_PROPERTIES( "_USB_TRANSPORT_CHARACTERISTICS.$", 0x18, true, 0x87d2317c8822516 );                                           
        SDK_FIXED_SIZE( usb_transport_characteristics_t, 0x18 );                                           
    };                                                           
};
#include "magic/usb_transport_characteristics_t.end.hpp"
SDK_VERIFY( struct wdf::usb_transport_characteristics_t, 0x18 );
