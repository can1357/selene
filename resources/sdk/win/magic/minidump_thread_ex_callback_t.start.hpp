#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_THREAD_EX_CALLBACK.ThreadId", thread_id, 0x0, 0x20, true, 0xee5981d4cd8f9326)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_THREAD_EX_CALLBACK.ThreadHandle", thread_handle, 0x20, 0x40, true, 0x94f63e8fa905c610)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_MINIDUMP_THREAD_EX_CALLBACK.Context", context, 0x80, 0x80, true, 0x2a44b5fb28df92e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_THREAD_EX_CALLBACK.SizeOfContext", size_of_context, 0x2700, 0x20, true, 0x3f14dd8851bfecb7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_THREAD_EX_CALLBACK.StackBase", stack_base, 0x2720, 0x40, true, 0xc5a4060b0a6e1f08)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_THREAD_EX_CALLBACK.StackEnd", stack_end, 0x2760, 0x40, true, 0x3896c7c949378a4c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_THREAD_EX_CALLBACK.BackingStoreBase", backing_store_base, 0x27a0, 0x40, true, 0x72fbcfc09c0594b3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_THREAD_EX_CALLBACK.BackingStoreEnd", backing_store_end, 0x27e0, 0x40, true, 0x51c3a3969f631090)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif