#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_RANGE_PIPE_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x6a5e303a9fbbd0d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_RANGE_PIPE_FORMAT.Flags", flags, 0x8, 0x8, true, 0x1aa3833dd8317af9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_RANGE_PIPE_FORMAT.Alignment", alignment, 0x10, 0x8, true, 0x8e07920883f09c5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_RANGE_PIPE_FORMAT.Type", type, 0x40, 0x40, true, 0x3693b9e90fd52712)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_RANGE_PIPE_FORMAT.MemorySize", memory_size, 0x80, 0x20, true, 0xc571c4d0f4feec2e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_RANGE_PIPE_FORMAT.BufferSize", buffer_size, 0xa0, 0x20, true, 0x22d2fc1b9c3aafc0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_RANGE_PIPE_FORMAT.MinValue", min_value, 0xc0, 0x20, true, 0xab3c431faf9df229)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_RANGE_PIPE_FORMAT.MaxValue", max_value, 0xe0, 0x20, true, 0xbedf22386e681e8f)
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