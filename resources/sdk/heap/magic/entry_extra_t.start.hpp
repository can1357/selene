#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY_EXTRA.AllocatorBackTraceIndex", allocator_back_trace_index, 0x0, 0x10, true, 0x9db72924fe2d59fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_ENTRY_EXTRA.TagIndex", tag_index, 0x10, 0x10, true, 0x324bda4bf86f2e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_ENTRY_EXTRA.Settable", settable, 0x40, 0x40, true, 0x6cd8d6e093586c04)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_ENTRY_EXTRA.ZeroInit", zero_init, 0x0, 0x40, true, 0x3473d080b3dbe211)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_ENTRY_EXTRA.ZeroInit1", zero_init1, 0x40, 0x40, true, 0x9f517cc60b66bc6d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif