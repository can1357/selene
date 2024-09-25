#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EWOW64PROCESS.Peb", peb, 0x0, 0x40, true, 0x93c5a6739198021f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EWOW64PROCESS.Machine", machine, 0x40, 0x10, true, 0xc055a33006771cbc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_dll_type_t), "_EWOW64PROCESS.NtdllType", ntdll_type, 0x60, 0x20, true, 0xd84fb1b6823ca09a)
#else
#define _m00
#define _m01
#define _m02
#endif