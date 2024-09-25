#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT_COMPLETION_LIST_INFORMATION.Buffer", buffer, 0x0, 0x40, true, 0xfd091d5c2dbcc91c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT_COMPLETION_LIST_INFORMATION.Size", size, 0x40, 0x20, true, 0xf3ffbd0fd27a28e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT_COMPLETION_LIST_INFORMATION.ConcurrencyCount", concurrency_count, 0x60, 0x20, true, 0x413d3d3e5e09b580)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT_COMPLETION_LIST_INFORMATION.AttributeFlags", attribute_flags, 0x80, 0x20, true, 0x6567ec609b988261)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif