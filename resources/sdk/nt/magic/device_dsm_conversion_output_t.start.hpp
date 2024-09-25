#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_CONVERSION_OUTPUT.Version", version, 0x0, 0x20, true, 0xbbdb9d33bb8c3858)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVICE_DSM_CONVERSION_OUTPUT.Source", source, 0x20, 0x80, true, 0x4d26be0d52882654)
#else
#define _m00
#define _m01
#endif