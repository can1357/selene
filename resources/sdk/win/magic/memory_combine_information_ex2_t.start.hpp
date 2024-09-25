#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_COMBINE_INFORMATION_EX2.Handle", handle, 0x0, 0x40, true, 0xd509b5eed90538f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_COMBINE_INFORMATION_EX2.PagesCombined", pages_combined, 0x40, 0x40, true, 0x965b56431eb8787c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_COMBINE_INFORMATION_EX2.Flags", flags, 0x80, 0x20, true, 0xe8c2fbce5981a83)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_COMBINE_INFORMATION_EX2.ProcessHandle", process_handle, 0xc0, 0x40, true, 0xd206fbe692d4c07)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif