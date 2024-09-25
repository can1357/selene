#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_stop_tracking_for_time_sync_information_t.start.hpp"
namespace wdf
{
    // [struct _USB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_stop_tracking_for_time_sync_information_t
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                              
        _m00 void* time_tracking_handle;                  //{ +0x0000    +0x0000    +0x0000    } | .TimeTrackingHandle
                                                        
        SDK_MAGIC_PROPERTIES( "_USB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION.$", 0x8, true, 0x886ba431065df0ee );                     
        SDK_FIXED_SIZE( usb_stop_tracking_for_time_sync_information_t, 0x8 );                     
    };                                                  
};
#include "magic/usb_stop_tracking_for_time_sync_information_t.end.hpp"
SDK_VERIFY( struct wdf::usb_stop_tracking_for_time_sync_information_t, 0x8 );
