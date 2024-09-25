#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_VIRTUAL_ALLOC_ENTRY.Entry", entry, 0x0, 0x80, true, 0x8e7ea4135d1a6f3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_extra_t), "_HEAP_VIRTUAL_ALLOC_ENTRY.ExtraStuff", extra_stuff, 0x80, 0x80, true, 0xf5210e393bfcbd19)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VIRTUAL_ALLOC_ENTRY.CommitSize", commit_size, 0x100, 0x40, true, 0xfa5deebdd536fe37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VIRTUAL_ALLOC_ENTRY.ReserveSize", reserve_size, 0x140, 0x40, true, 0x5ada136bb2949772)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t), "_HEAP_VIRTUAL_ALLOC_ENTRY.BusyBlock", busy_block, 0x180, 0x80, true, 0x5391aa3af677bd8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif