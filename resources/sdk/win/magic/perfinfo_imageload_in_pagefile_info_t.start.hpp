#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.FileObject", file_object, 0x0, 0x40, true, 0x9eacc6283f635fd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.DeviceCharacteristics", device_characteristics, 0x40, 0x20, true, 0x80e227a873baaf6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.FileCharacteristics", file_characteristics, 0x60, 0x10, true, 0xe49bb7cbc11d52c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.Flags.Flags", flags, 0x0, 0x10, true, 0xd0c47cb5c107dca0)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.Flags.ActiveDataReference", active_data_reference, 0x0, 0x1, true, 0x6f1cd2f6e5cf0aaf, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.Flags.DeviceEjectable", device_ejectable, 0x1, 0x1, true, 0xc850d8752a331ba9, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.Flags.WritableHandles", writable_handles, 0x2, 0x1, true, 0x35c3402632241d4a, 1, uint16_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.Flags", flags, 0x70, 0x10, true, 0x3d8894382c525285)
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