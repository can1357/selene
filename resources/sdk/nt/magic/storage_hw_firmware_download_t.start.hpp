#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD.Version", version, 0x0, 0x20, true, 0x794aec5fad2c86c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD.Size", size, 0x20, 0x20, true, 0x36f905a5479dedd2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD.Flags", flags, 0x40, 0x20, true, 0xc53ff9ab16e9d6db)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD.Slot", slot, 0x60, 0x8, true, 0x62076bb60da391ca)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD.Offset", offset, 0x80, 0x40, true, 0xfcd475ab0ebc4fd7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_HW_FIRMWARE_DOWNLOAD.BufferSize", buffer_size, 0xc0, 0x40, true, 0xed4e4f15e074199f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_HW_FIRMWARE_DOWNLOAD.ImageBuffer", image_buffer, 0x100, 0x8, true, 0xb51a8d9e50b48957)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif