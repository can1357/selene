#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_VIRTUAL_ALLOC.CapturedBase", captured_base, 0x0, 0x40, true, 0xdb3725c8d6bb396e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_VIRTUAL_ALLOC.CapturedRegionSize", captured_region_size, 0x40, 0x40, true, 0x170244316592aadd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_VIRTUAL_ALLOC.ProcessId", process_id, 0x80, 0x20, true, 0xb6e5477ffc5ad1bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_VIRTUAL_ALLOC.Flags", flags, 0xa0, 0x20, true, 0x7e14342051325cc0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif