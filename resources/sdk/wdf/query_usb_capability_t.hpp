#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/query_usb_capability_t.start.hpp"
namespace wdf
{
    struct usbdi_handle_t;

    // [struct _QUERY_USB_CAPABILITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_usb_capability_t                             
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 uint16_t                    version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                    size;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct wdf::usbdi_handle_t* usbdi_handle;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .USBDIHandle
        _m03 struct nt::guid_t           capability_type;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CapabilityType
        _m04 uint32_t                    output_buffer_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBufferLength
        _m05 uint32_t                    result_length;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ResultLength
                                                              
        SDK_MAGIC_PROPERTIES( "_QUERY_USB_CAPABILITY.$", 0x28, true, 0xf301b09086bea330 );                     
        SDK_FIXED_SIZE( query_usb_capability_t, 0x28 );                     
    };                                                        
};
#include "magic/query_usb_capability_t.end.hpp"
SDK_VERIFY( struct wdf::query_usb_capability_t, 0x28 );
