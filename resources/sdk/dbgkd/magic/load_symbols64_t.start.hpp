#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS64.PathNameLength", path_name_length, 0x0, 0x20, true, 0x1d0e8665445cb79e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_LOAD_SYMBOLS64.BaseOfDll", base_of_dll, 0x40, 0x40, true, 0x8bbb22517c0cc35d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_LOAD_SYMBOLS64.ProcessId", process_id, 0x80, 0x40, true, 0x485c2e066efa00fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS64.CheckSum", check_sum, 0xc0, 0x20, true, 0x67135d320721a40a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_LOAD_SYMBOLS64.SizeOfImage", size_of_image, 0xe0, 0x20, true, 0xb51e1f77b5ef0fa5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_LOAD_SYMBOLS64.UnloadSymbols", unload_symbols, 0x100, 0x8, true, 0x1141cc002549a72f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif