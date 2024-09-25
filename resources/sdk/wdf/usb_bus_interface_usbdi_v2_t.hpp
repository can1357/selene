#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_bus_interface_usbdi_v2_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct usbd_version_information_t;

    // [struct _USB_BUS_INTERFACE_USBDI_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_bus_interface_usbdi_v2_t                                      
    {                                                                        
        using pusb_busiffn_getusbdi_version_t =      sdk::function<void(void*, struct wdf::usbd_version_information_t*, uint32_t*)>*;                      
        using pusb_busiffn_submit_iso_out_urb_t =    sdk::function<int32_t(void*, struct wdf::urb_t*)>*;                      
        using pusb_busiffn_query_bus_information_t = sdk::function<int32_t(void*, uint32_t, void*, uint32_t*, uint32_t*)>*;                      
        using pusb_busiffn_enum_log_entry_t =        sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t)>*;                      
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint16_t                                  size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                  version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                     bus_context;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BusContext
        _m03 sdk::function<void(void*)>*               interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*               interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 pusb_busiffn_getusbdi_version_t           get_usbdi_version;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetUSBDIVersion
        _m06 sdk::function<int32_t(void*, uint32_t*)>* query_bus_time;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueryBusTime
        _m07 pusb_busiffn_submit_iso_out_urb_t         submit_iso_out_urb;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SubmitIsoOutUrb
        _m08 pusb_busiffn_query_bus_information_t      query_bus_information;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .QueryBusInformation
        _m09 sdk::function<uint8_t(void*)>*            is_device_high_speed;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .IsDeviceHighSpeed
        _m10 pusb_busiffn_enum_log_entry_t             enum_log_entry;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnumLogEntry
                                                                             
        SDK_MAGIC_PROPERTIES( "_USB_BUS_INTERFACE_USBDI_V2.$", 0x50, true, 0x936b2460450299b2 );                      
        SDK_FIXED_SIZE( usb_bus_interface_usbdi_v2_t, 0x50 );                      
    };                                                                       
};
#include "magic/usb_bus_interface_usbdi_v2_t.end.hpp"
SDK_VERIFY( struct wdf::usb_bus_interface_usbdi_v2_t, 0x50 );
