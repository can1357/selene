#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_usage_entry_t*), "_RTL_HEAP_USAGE_ENTRY.Next", next, 0x0, 0x40, true, 0xe1775b2daeaaced2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_USAGE_ENTRY.Address", address, 0x40, 0x40, true, 0x153512a2b25cb5a8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_USAGE_ENTRY.Size", size, 0x80, 0x40, true, 0x3a702c5b38990d43)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_USAGE_ENTRY.AllocatorBackTraceIndex", allocator_back_trace_index, 0xc0, 0x10, true, 0xbd3a0fbc0aa18ffb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_USAGE_ENTRY.TagIndex", tag_index, 0xd0, 0x10, true, 0x91d9e8d5859fd850)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif