#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_ENDPOINT_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x6786c467b9694f33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_ENDPOINT_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xc922f115cbef79b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_ENDPOINT_DESCRIPTOR.bEndpointAddress", b_endpoint_address, 0x10, 0x8, true, 0xcc3d995fc183c291)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_ENDPOINT_DESCRIPTOR.bmAttributes", bm_attributes, 0x18, 0x8, true, 0xc1c38add645a12b8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_ENDPOINT_DESCRIPTOR.wMaxPacketSize", w_max_packet_size, 0x20, 0x10, true, 0xb9e5147e6c45aded)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_ENDPOINT_DESCRIPTOR.bInterval", b_interval, 0x30, 0x8, true, 0x12f8137beea0ffa5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif