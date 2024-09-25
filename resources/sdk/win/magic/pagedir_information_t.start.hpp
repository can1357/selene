#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_PAGEDIR_INFORMATION.DontUse", dont_use, 0x0, 0x9, true, 0x82145dae2d5e47ab, 9, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_PAGEDIR_INFORMATION.PageDirectoryBase", page_directory_base, 0x9, 0x30, true, 0xba1fb6d8861423ea, 48, uint64_t)
#else
#define _m00
#define _m01
#endif