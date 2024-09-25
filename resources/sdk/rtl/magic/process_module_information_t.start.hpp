#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PROCESS_MODULE_INFORMATION.Section", section, 0x0, 0x40, true, 0xba4e031d062cff68)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PROCESS_MODULE_INFORMATION.MappedBase", mapped_base, 0x40, 0x40, true, 0x714823b4b2fdba17)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PROCESS_MODULE_INFORMATION.ImageBase", image_base, 0x80, 0x40, true, 0xb2173d7f2c6f381a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_MODULE_INFORMATION.ImageSize", image_size, 0xc0, 0x20, true, 0xd895d08a36b578c1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_MODULE_INFORMATION.Flags", flags, 0xe0, 0x20, true, 0xb7f9fc56b3b50fbb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_MODULE_INFORMATION.LoadOrderIndex", load_order_index, 0x100, 0x10, true, 0x200ba46a260d806b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_MODULE_INFORMATION.InitOrderIndex", init_order_index, 0x110, 0x10, true, 0xd09210c8a290208c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_MODULE_INFORMATION.LoadCount", load_count, 0x120, 0x10, true, 0xf426dfd84ed5b621)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_MODULE_INFORMATION.OffsetToFileName", offset_to_file_name, 0x130, 0x10, true, 0xfc4c16f90278882e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_RTL_PROCESS_MODULE_INFORMATION.FullPathName", full_path_name, 0x140, 0x0, true, 0x65be50770a64f701)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif