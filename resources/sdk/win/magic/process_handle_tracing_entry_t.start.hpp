#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HANDLE_TRACING_ENTRY.Handle", handle, 0x0, 0x40, true, 0x88a4b83cf423c0e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_PROCESS_HANDLE_TRACING_ENTRY.ClientId", client_id, 0x40, 0x80, true, 0x4ffd89ff892a7503)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TRACING_ENTRY.Type", type, 0xc0, 0x20, true, 0xd8a6dd2cf08ce1dd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 16>), "_PROCESS_HANDLE_TRACING_ENTRY.Stacks", stacks, 0x100, 0x0, true, 0xa4221b5900c17802)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif