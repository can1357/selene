#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGKM_LOAD_DLL.FileHandle", file_handle, 0x0, 0x40, true, 0xf4baf64e3ff4d461)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGKM_LOAD_DLL.BaseOfDll", base_of_dll, 0x40, 0x40, true, 0x499b9a9f66592da2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_LOAD_DLL.DebugInfoFileOffset", debug_info_file_offset, 0x80, 0x20, true, 0xf8f9d127ffa7245a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_LOAD_DLL.DebugInfoSize", debug_info_size, 0xa0, 0x20, true, 0xc13b4b40ee0bf994)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGKM_LOAD_DLL.NamePointer", name_pointer, 0xc0, 0x40, true, 0x261867d1ccc0b18f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif