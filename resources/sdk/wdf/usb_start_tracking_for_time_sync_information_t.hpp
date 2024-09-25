#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_start_tracking_for_time_sync_information_t.start.hpp"
namespace wdf
{
    // [struct _USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_start_tracking_for_time_sync_information_t
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                      
        _m00 void*   time_tracking_handle;                 //{ +0x0000    +0x0000    +0x0000    } | .TimeTrackingHandle
        _m01 uint8_t is_startup_delay_tolerable;           //{ +0x0008    +0x0008    +0x0008    } | .IsStartupDelayTolerable
                                                         
        SDK_MAGIC_PROPERTIES( "_USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION.$", 0x9, true, 0xd5dd69190d8c0541 );                           
        SDK_FIXED_SIZE( usb_start_tracking_for_time_sync_information_t, 0x9 );                           
    };                                                   
};
#include "magic/usb_start_tracking_for_time_sync_information_t.end.hpp"
SDK_VERIFY( struct wdf::usb_start_tracking_for_time_sync_information_t, 0x9 );
