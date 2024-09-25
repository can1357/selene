#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xf2e8af9fdade37a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x2d5101b621b08db7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xd674b76b03c02cf)
#else
#define _m00
#define _m01
#define _m02
#endif