#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_CREATE.Header", header, 0x0, 0x0, true, 0xe98bb404dafc193b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_CREATE.HeapHandle", heap_handle, 0x100, 0x40, true, 0xac85ab79dc18d81f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_CREATE.Flags", flags, 0x140, 0x20, true, 0x67bcacd71ae7a585)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CREATE.ReserveSize", reserve_size, 0x160, 0x40, true, 0x4c100f9725ab50b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CREATE.CommitSize", commit_size, 0x1a0, 0x40, true, 0x13fc9169eb054c5d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CREATE.AllocatedSize", allocated_size, 0x1e0, 0x40, true, 0xe680265e70dbdd06)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif