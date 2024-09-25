#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_ENTRY.Size", size, 0x0, 0x40, true, 0xb393672d23bfd81b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_ENTRY.Flags", flags, 0x40, 0x10, true, 0x8e34ad3891a0c35b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_ENTRY.AllocatorBackTraceIndex", allocator_back_trace_index, 0x50, 0x10, true, 0xae1b8115b18100d6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_ENTRY.Settable", settable, 0x80, 0x40, true, 0xec3709a2b6ae543d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_ENTRY.Tag", tag, 0xc0, 0x20, true, 0x6f226b13e7853b01)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_ENTRY.CommittedSize", committed_size, 0x80, 0x40, true, 0x59421d7b73b665c8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_ENTRY.FirstBlock", first_block, 0xc0, 0x40, true, 0x325e6767cc7dcc88)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif