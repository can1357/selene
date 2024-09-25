#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x6586ca7ab345f401)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x8fc92aabb84a466a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR.wReserved", w_reserved, 0x10, 0x10, true, 0xc3e419bbf945a7fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR.dwBytesPerInterval", dw_bytes_per_interval, 0x20, 0x20, true, 0x6b869f9a807b3f6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif