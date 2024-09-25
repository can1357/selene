#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_HANDLE_TRACE_DB_ENTRY.ClientId", client_id, 0x0, 0x80, true, 0x45910493ec95b090)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HANDLE_TRACE_DB_ENTRY.Handle", handle, 0x80, 0x40, true, 0x5c7c3f74e92eff6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HANDLE_TRACE_DB_ENTRY.Type", type, 0xc0, 0x20, true, 0x1dc529be0f537c1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 16>), "_HANDLE_TRACE_DB_ENTRY.StackTrace", stack_trace, 0x100, 0x0, true, 0xfaeceb8bb9624991)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif