#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_CONTRACTION.Header", header, 0x0, 0x0, true, 0x9a2d3563f12eac8b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_CONTRACTION.HeapHandle", heap_handle, 0x100, 0x40, true, 0xc3a7ee722dd28a7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CONTRACTION.DeCommitSize", de_commit_size, 0x140, 0x40, true, 0xbe88d1e2c859adce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_CONTRACTION.DeCommitAddress", de_commit_address, 0x180, 0x40, true, 0x8003689a2d7d10d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CONTRACTION.FreeSpace", free_space, 0x1c0, 0x40, true, 0xa2a9b828f263c126)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CONTRACTION.CommittedSpace", committed_space, 0x200, 0x40, true, 0xc0c6bd9c875b6ca6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CONTRACTION.ReservedSpace", reserved_space, 0x240, 0x40, true, 0xb2dfed89bd8bd8c4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_CONTRACTION.NoOfUCRs", no_of_uc_rs, 0x280, 0x20, true, 0xa298d647c805c74a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_CONTRACTION.AllocatedSpace", allocated_space, 0x2a0, 0x40, true, 0x2d6b46200eb18d2e)
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