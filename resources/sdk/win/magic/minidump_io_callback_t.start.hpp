#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_IO_CALLBACK.Handle", handle, 0x0, 0x40, true, 0x282a5e24f34ad448)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_IO_CALLBACK.Offset", offset, 0x40, 0x40, true, 0xbe8986a403560929)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_IO_CALLBACK.Buffer", buffer, 0x80, 0x40, true, 0xdee778eb35ddbb1c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_IO_CALLBACK.BufferBytes", buffer_bytes, 0xc0, 0x20, true, 0x93b83a4b8a50c951)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif