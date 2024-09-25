#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64.Handle", handle, 0x0, 0x40, true, 0xc6d2dc2241a25177)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::avrf_client_id_wow64_t), "_AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64.ClientId", client_id, 0x40, 0x80, true, 0x14f5c42aa9952a6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64.Type", type, 0xc0, 0x20, true, 0x279d020b82258ca3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 16>), "_AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64.Stacks", stacks, 0x100, 0x0, true, 0xbe98c7bd9bb7b3af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif