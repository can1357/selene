#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_USER_STREAM.Type", type, 0x0, 0x20, true, 0x1348ea6582edd729)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_USER_STREAM.BufferSize", buffer_size, 0x20, 0x20, true, 0xdd90805f14099a69)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_USER_STREAM.Buffer", buffer, 0x40, 0x40, true, 0x95b416c37bc37134)
#else
#define _m00
#define _m01
#define _m02
#endif