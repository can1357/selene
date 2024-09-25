#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_DOWNLOAD.Version", version, 0x0, 0x20, true, 0x11b5cb9e3f4512da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_DOWNLOAD.Size", size, 0x20, 0x20, true, 0x7ad2f602dfefe51d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_FIRMWARE_DOWNLOAD.Offset", offset, 0x40, 0x40, true, 0x920493ed28be4377)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_FIRMWARE_DOWNLOAD.BufferSize", buffer_size, 0x80, 0x40, true, 0x36ffeba7a7c3f30e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_STORAGE_FIRMWARE_DOWNLOAD.ImageBuffer", image_buffer, 0xc0, 0x0, true, 0x141215803f3014a3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif