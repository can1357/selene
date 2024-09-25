#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x11cc9777b77a79d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xc6b2870c58770de9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0x42072ebdc42116ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.bmAttributes", bm_attributes, 0x18, 0x8, true, 0x40e99a41ea0a7c5b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.wSpeedsSupported", w_speeds_supported, 0x20, 0x10, true, 0xdaaaaa525d12ad9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.bFunctionalitySupport", b_functionality_support, 0x30, 0x8, true, 0x8adc08580cad12ac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.bU1DevExitLat", b_u1_dev_exit_lat, 0x38, 0x8, true, 0x16b1880537b7e6b8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.wU2DevExitLat", w_u2_dev_exit_lat, 0x40, 0x10, true, 0x9d0578e143764b6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif