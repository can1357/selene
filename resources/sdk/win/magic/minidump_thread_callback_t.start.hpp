#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_THREAD_CALLBACK.ThreadId", thread_id, 0x0, 0x20, true, 0x4bd1f2abd262386e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_THREAD_CALLBACK.ThreadHandle", thread_handle, 0x20, 0x40, true, 0xd966e56b18583040)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_MINIDUMP_THREAD_CALLBACK.Context", context, 0x80, 0x80, true, 0x92f38f4a7cfa0cf9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_THREAD_CALLBACK.SizeOfContext", size_of_context, 0x2700, 0x20, true, 0x123367cb3f37ef44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_THREAD_CALLBACK.StackBase", stack_base, 0x2720, 0x40, true, 0xa75500af05261328)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_THREAD_CALLBACK.StackEnd", stack_end, 0x2760, 0x40, true, 0xdc7e0173ff5977ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif