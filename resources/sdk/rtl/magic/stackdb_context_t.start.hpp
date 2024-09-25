#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_table_t), "_RTL_STACKDB_CONTEXT.StackSegmentTable", stack_segment_table, 0x0, 0x80, true, 0x3bbef57e91f309eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_table_t), "_RTL_STACKDB_CONTEXT.StackEntryTable", stack_entry_table, 0x80, 0x80, true, 0xcdafa415a86895c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "_RTL_STACKDB_CONTEXT.StackEntryTableLock", stack_entry_table_lock, 0x100, 0x40, true, 0xad0b9a8e3298bafb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "_RTL_STACKDB_CONTEXT.SegmentTableLock", segment_table_lock, 0x140, 0x40, true, 0x9e7d59ce6a1ef5b3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t, void*)>*), "_RTL_STACKDB_CONTEXT.Allocate", allocate, 0x180, 0x40, true, 0x71f90cbccea477ec)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_RTL_STACKDB_CONTEXT.Free", free, 0x1c0, 0x40, true, 0x8250ee0213338349)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_STACKDB_CONTEXT.AllocatorContext", allocator_context, 0x200, 0x40, true, 0xe870160d6bd0fe7f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif