#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usbd_iso_packet_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USBD_ISO_PACKET_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_iso_packet_descriptor_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t offset;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t length;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 int32_t  status;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
                                       
        SDK_MAGIC_PROPERTIES( "_USBD_ISO_PACKET_DESCRIPTOR.$", 0xc, true, 0x1c7d4f08c6d41009 );       
        SDK_FIXED_SIZE( usbd_iso_packet_descriptor_t, 0xc );       
    };                                 
};
#include "magic/usbd_iso_packet_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_iso_packet_descriptor_t, 0xc );
