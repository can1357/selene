#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_NAMESPACE_INFO.Version", version, 0x0, 0x20, true, 0x7bb248fab061a7b4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_NAMESPACE_INFO.DeviceNumber", device_number, 0x20, 0x20, true, 0x7d617c77cc5b7d0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CSV_NAMESPACE_INFO.StartingOffset", starting_offset, 0x40, 0x40, true, 0xe9ce7841654b332f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_NAMESPACE_INFO.SectorSize", sector_size, 0x80, 0x20, true, 0xb495c0f9248ba125)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif