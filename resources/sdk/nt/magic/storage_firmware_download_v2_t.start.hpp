#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_DOWNLOAD_V2.Version", version, 0x0, 0x20, true, 0xae8bbdc4fb011a02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_DOWNLOAD_V2.Size", size, 0x20, 0x20, true, 0x9bf0df116a99e43c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_FIRMWARE_DOWNLOAD_V2.Offset", offset, 0x40, 0x40, true, 0x4e722b8ab1e776c1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_FIRMWARE_DOWNLOAD_V2.BufferSize", buffer_size, 0x80, 0x40, true, 0x8fb2406f3c56daf0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_DOWNLOAD_V2.Slot", slot, 0xc0, 0x8, true, 0x58a86dae2cc97628)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_DOWNLOAD_V2.ImageSize", image_size, 0xe0, 0x20, true, 0x37af091160c29be3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_STORAGE_FIRMWARE_DOWNLOAD_V2.ImageBuffer", image_buffer, 0x100, 0x0, true, 0x4a0b840746ffeab6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif