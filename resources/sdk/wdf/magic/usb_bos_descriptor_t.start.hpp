#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_BOS_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x3b2a3f7182c18661)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_BOS_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x6107afa3fbd358f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BOS_DESCRIPTOR.wTotalLength", w_total_length, 0x10, 0x10, true, 0x86b0b6a700f0c9fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_BOS_DESCRIPTOR.bNumDeviceCaps", b_num_device_caps, 0x20, 0x8, true, 0x1fe7c75367dbb10e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif