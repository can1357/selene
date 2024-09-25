#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JIT_DEBUG_INFO.dwSize", dw_size, 0x0, 0x20, true, 0x37934655e429e742)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JIT_DEBUG_INFO.dwProcessorArchitecture", dw_processor_architecture, 0x20, 0x20, true, 0x81327d887539aaa4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JIT_DEBUG_INFO.dwThreadID", dw_thread_id, 0x40, 0x20, true, 0x5da49712a9fb3fc3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JIT_DEBUG_INFO.dwReserved0", dw_reserved0, 0x60, 0x20, true, 0x8c2cbd1536d7681e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JIT_DEBUG_INFO.lpExceptionAddress", lp_exception_address, 0x80, 0x40, true, 0xbea61164d2ac8fef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JIT_DEBUG_INFO.lpExceptionRecord", lp_exception_record, 0xc0, 0x40, true, 0x1f09f7db2147452f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JIT_DEBUG_INFO.lpContextRecord", lp_context_record, 0x100, 0x40, true, 0xcad12e7fa7b6c82a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif