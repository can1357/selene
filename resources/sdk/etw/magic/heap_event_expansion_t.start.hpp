#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_EXPANSION.Header", header, 0x0, 0x0, true, 0x8d5b0be7fff39e9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_EXPANSION.HeapHandle", heap_handle, 0x100, 0x40, true, 0x706e46bf54c32fcd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_EXPANSION.CommittedSize", committed_size, 0x140, 0x40, true, 0xe43f61cd5ee90113)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_EXPANSION.Address", address, 0x180, 0x40, true, 0xd1b7200578d3955e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_EXPANSION.FreeSpace", free_space, 0x1c0, 0x40, true, 0xdfda88e460d85908)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_EXPANSION.CommittedSpace", committed_space, 0x200, 0x40, true, 0xc4f14a6e89ab78c9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_EXPANSION.ReservedSpace", reserved_space, 0x240, 0x40, true, 0xabfb5d5aeac841c5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_EXPANSION.NoOfUCRs", no_of_uc_rs, 0x280, 0x20, true, 0x38a9d29b5af61445)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_EXPANSION.AllocatedSpace", allocated_space, 0x2a0, 0x40, true, 0x6728cddceebd840e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif