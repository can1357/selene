#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.Version", version, 0x0, 0x20, true, 0x5fb39f5fd7a17b67)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.Size", size, 0x20, 0x20, true, 0x4b74732687b3f93)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.Flags", flags, 0x40, 0x20, true, 0x3cc1664125dbaab1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.Slot", slot, 0x60, 0x8, true, 0x5ae562e4aa8d2ae5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.Offset", offset, 0x80, 0x40, true, 0xbeb87008a26b225f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.BufferSize", buffer_size, 0xc0, 0x40, true, 0x17d05968282070d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.ImageSize", image_size, 0x100, 0x20, true, 0xb8bca05cca4fd14)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.ImageBuffer", image_buffer, 0x140, 0x8, true, 0xfe674fc0fc7fb083)
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