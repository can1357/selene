#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/urb_header_t.start.hpp"
namespace wdf
{
    // [struct _URB_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_header_t                  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint16_t length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t function;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Function
        _m02 int32_t  status;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Status
        _m03 void*    usbd_device_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UsbdDeviceHandle
        _m04 uint32_t usbd_flags;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UsbdFlags
                                         
        SDK_MAGIC_PROPERTIES( "_URB_HEADER.$", 0x18, true, 0x395aec4d9beddc5c );                   
        SDK_FIXED_SIZE( urb_header_t, 0x18 );                   
    };                                   
};
#include "magic/urb_header_t.end.hpp"
SDK_VERIFY( struct wdf::urb_header_t, 0x18 );
