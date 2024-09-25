#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS32.PathNameLength", path_name_length, 0x0, 0x20, true, 0x35bbd82e1f77efcb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS32.BaseOfDll", base_of_dll, 0x20, 0x20, true, 0xb90f9bb48211193a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS32.ProcessId", process_id, 0x40, 0x20, true, 0x2276071327a5e5a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS32.CheckSum", check_sum, 0x60, 0x20, true, 0x7bbcd59730cff8db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS32.SizeOfImage", size_of_image, 0x80, 0x20, true, 0xd58119bfb622a2cd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_LOAD_SYMBOLS32.UnloadSymbols", unload_symbols, 0xa0, 0x8, true, 0x61092bcf1f88a2fd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif