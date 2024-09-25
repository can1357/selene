#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_UNWIND_HISTORY_TABLE_ENTRY.ImageBase", image_base, 0x0, 0x40, true, 0x50281da00c9a9758)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::runtime_function_entry_t*), "_UNWIND_HISTORY_TABLE_ENTRY.FunctionEntry", function_entry, 0x40, 0x40, true, 0x26b7b340cd78b54)
#else
#define _m00
#define _m01
#endif