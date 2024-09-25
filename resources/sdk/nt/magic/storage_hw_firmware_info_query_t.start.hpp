#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO_QUERY.Version", version, 0x0, 0x20, true, 0xa0011fd55cfd89fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO_QUERY.Size", size, 0x20, 0x20, true, 0x864fca3f0f663c47)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO_QUERY.Flags", flags, 0x40, 0x20, true, 0xd00a94cbdf43b9e6)
#else
#define _m00
#define _m01
#define _m02
#endif