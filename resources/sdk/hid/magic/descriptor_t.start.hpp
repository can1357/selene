#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x9256184c4f41b345)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x41c0108705976031)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_DESCRIPTOR.bcdHID", bcd_hid, 0x10, 0x10, true, 0xee0c260e2a40c7df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DESCRIPTOR.bCountry", b_country, 0x20, 0x8, true, 0xfe4ba5a680e5d5e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DESCRIPTOR.bNumDescriptors", b_num_descriptors, 0x28, 0x8, true, 0xf144e270cabfe9e4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct hid::descriptor_desc_list_t, 1>), "_HID_DESCRIPTOR.DescriptorList", descriptor_list, 0x30, 0x18, true, 0x554633458d59748e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif