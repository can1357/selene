#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_COMBINE_INFORMATION_EX.Handle", handle, 0x0, 0x40, true, 0x6b6953d843364c6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_COMBINE_INFORMATION_EX.PagesCombined", pages_combined, 0x40, 0x40, true, 0x57ba81a60612c577)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_COMBINE_INFORMATION_EX.Flags", flags, 0x80, 0x20, true, 0xe317aebe25e963d6)
#else
#define _m00
#define _m01
#define _m02
#endif