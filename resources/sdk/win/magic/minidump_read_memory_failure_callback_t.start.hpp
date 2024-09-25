#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_READ_MEMORY_FAILURE_CALLBACK.Offset", offset, 0x0, 0x40, true, 0xd06b7c2e467053c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_READ_MEMORY_FAILURE_CALLBACK.Bytes", bytes, 0x40, 0x20, true, 0x18b82065c6402330)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_MINIDUMP_READ_MEMORY_FAILURE_CALLBACK.FailureStatus", failure_status, 0x60, 0x20, true, 0x5493db18091b6291)
#else
#define _m00
#define _m01
#define _m02
#endif