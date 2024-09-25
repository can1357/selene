#pragma once
#include <sdkgen/support_library.hpp>
#include "auto_irp_t.hpp"
#include "../wdf/usb_idle_callback_info_t.hpp"

#include "magic/usb_idle_info_t.start.hpp"
namespace fx
{
    struct cr_event_t;

    // [struct FxUsbIdleInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_idle_info_t                                              
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                              
        _m00 struct fx::cr_event_t*               m_idle_callback_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_IdleCallbackEvent
        _m01 struct fx::auto_irp_t                m_idle_irp;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_IdleIrp
        _m02 struct wdf::usb_idle_callback_info_t m_callback_info;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_CallbackInfo
        _m03 uint8_t                              m_event_dropped;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_EventDropped
                                                                        
        SDK_MAGIC_PROPERTIES( "FxUsbIdleInfo.$", 0x28, true, 0x3a3ae8ee3aeb394a );                      
        SDK_FIXED_SIZE( usb_idle_info_t, 0x28 );                        
    };                                                                  
};
#include "magic/usb_idle_info_t.end.hpp"
SDK_VERIFY( struct fx::usb_idle_info_t, 0x28 );
