#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_BUS_INFORMATION_LEVEL_1.TotalBandwidth", total_bandwidth, 0x0, 0x20, true, 0xad91d4a8cac65f2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_BUS_INFORMATION_LEVEL_1.ConsumedBandwidth", consumed_bandwidth, 0x20, 0x20, true, 0x2156f083f589a6bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_BUS_INFORMATION_LEVEL_1.ControllerNameLength", controller_name_length, 0x40, 0x20, true, 0x6fec91aa133da46c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_USB_BUS_INFORMATION_LEVEL_1.ControllerNameUnicodeString", controller_name_unicode_string, 0x60, 0x10, true, 0xc3267564f53b6efc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif