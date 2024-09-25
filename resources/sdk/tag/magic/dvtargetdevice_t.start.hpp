#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDVTARGETDEVICE.tdSize", td_size, 0x0, 0x20, true, 0xba7696ac83fda845)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDVTARGETDEVICE.tdDriverNameOffset", td_driver_name_offset, 0x20, 0x10, true, 0x46c42cc1c3164dbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDVTARGETDEVICE.tdDeviceNameOffset", td_device_name_offset, 0x30, 0x10, true, 0x76c620c0bf703708)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDVTARGETDEVICE.tdPortNameOffset", td_port_name_offset, 0x40, 0x10, true, 0xecb65b11d3e2b107)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDVTARGETDEVICE.tdExtDevmodeOffset", td_ext_devmode_offset, 0x50, 0x10, true, 0xf57890bf8497e38d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagDVTARGETDEVICE.tdData", td_data, 0x60, 0x8, true, 0x3f43b6c252315a55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif