#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_PIPE_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xfd3393eab5de1263)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_PIPE_FORMAT.Flags", flags, 0x8, 0x8, true, 0xbb3a72755614a96d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_PIPE_FORMAT.Alignment", alignment, 0x10, 0x8, true, 0x78588414f254a1c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_PIPE_FORMAT.Type", type, 0x40, 0x40, true, 0x30c1d440fe53d7a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PIPE_FORMAT.MemorySize", memory_size, 0x80, 0x20, true, 0xbecb4b9a82a84765)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_PIPE_FORMAT.BufferSize", buffer_size, 0xa0, 0x20, true, 0x3a295a0a8bf14e21)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif