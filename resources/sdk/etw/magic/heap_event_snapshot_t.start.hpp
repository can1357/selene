#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_SNAPSHOT.Header", header, 0x0, 0x0, true, 0xc02a53101786644d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_SNAPSHOT.HeapHandle", heap_handle, 0x100, 0x40, true, 0x389ef6f84d74af19)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_SNAPSHOT.FreeSpace", free_space, 0x140, 0x40, true, 0x2191efde91796c8d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_SNAPSHOT.CommittedSpace", committed_space, 0x180, 0x40, true, 0x4c5880953ada9bb4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_SNAPSHOT.ReservedSpace", reserved_space, 0x1c0, 0x40, true, 0xfc89ebec96e34ba8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_SNAPSHOT.Flags", flags, 0x200, 0x20, true, 0xe237a4a0f03a519b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_SNAPSHOT.ProcessId", process_id, 0x220, 0x20, true, 0x1d9fab5a4433bc48)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_SNAPSHOT.LargeUCRSpace", large_ucr_space, 0x240, 0x40, true, 0x60d43f9341e91849)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_SNAPSHOT.FreeListLength", free_list_length, 0x280, 0x20, true, 0xdf93f920b8e94e5b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_SNAPSHOT.UCRLength", ucr_length, 0x2a0, 0x20, true, 0x2c5dd5076ff3ea7a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_SNAPSHOT.AllocatedSpace", allocated_space, 0x2c0, 0x40, true, 0x1ad09f34a9c9f33f)
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
#define _m09
#define _m10
#endif