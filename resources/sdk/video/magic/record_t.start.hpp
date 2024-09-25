#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_RECORD.MemorySize", memory_size, 0x0, 0x20, true, 0x278dc8af5f4befba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_RECORD.XResolution", x_resolution, 0x20, 0x20, true, 0x90124c8da2650479)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_RECORD.YResolution", y_resolution, 0x40, 0x20, true, 0x7182dc3fabf9ec4d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_RECORD.BitsPerPixel", bits_per_pixel, 0x60, 0x20, true, 0xe0e7853b2e3f8f6b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_RECORD.VRefresh", v_refresh, 0x80, 0x20, true, 0x35d5dec4d8fea51e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_VIDEO_RECORD.ChipType", chip_type, 0xa0, 0x0, true, 0xef4acb24c87927ab)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_VIDEO_RECORD.DACType", dac_type, 0x10a0, 0x0, true, 0x2d5c949211ab47e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_VIDEO_RECORD.AdapterString", adapter_string, 0x20a0, 0x0, true, 0xb15fe8fa1ff39636)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_VIDEO_RECORD.BiosString", bios_string, 0x30a0, 0x0, true, 0xca71b8943d690848)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_VIDEO_RECORD.DeviceId", device_id, 0x40a0, 0x0, true, 0xfc7af1c2b4bf05f3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_RECORD.StateFlags", state_flags, 0x50a0, 0x20, true, 0xe3527cbaf814c67e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif