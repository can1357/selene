#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_descriptor_t         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint8_t  b_length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint16_t bcd_usb;               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bcdUSB
        _m03 uint8_t  b_device_class;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bDeviceClass
        _m04 uint8_t  b_device_sub_class;    //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bDeviceSubClass
        _m05 uint8_t  b_device_protocol;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bDeviceProtocol
        _m06 uint8_t  b_max_packet_size0;    //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bMaxPacketSize0
        _m07 uint16_t id_vendor;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .idVendor
        _m08 uint16_t id_product;            //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .idProduct
        _m09 uint16_t bcd_device;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bcdDevice
        _m10 uint8_t  i_manufacturer;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .iManufacturer
        _m11 uint8_t  i_product;             //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .iProduct
        _m12 uint8_t  i_serial_number;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iSerialNumber
        _m13 uint8_t  b_num_configurations;  //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .bNumConfigurations
                                           
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_DESCRIPTOR.$", 0x12, true, 0xa10e7503fc9e74f0 );                     
        SDK_FIXED_SIZE( usb_device_descriptor_t, 0x12 );                     
    };                                     
};
#include "magic/usb_device_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_descriptor_t, 0x12 );
