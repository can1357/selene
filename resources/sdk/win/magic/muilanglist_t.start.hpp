#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUILANGLIST.TotalSize", total_size, 0x0, 0x20, true, 0xa4d1a049d0246f68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGLIST.NumLanguages", num_languages, 0x20, 0x10, true, 0xfade7040fc5ccabb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGLIST.MaxNumLanguages", max_num_languages, 0x30, 0x10, true, 0xad55a2f251ad2ee9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MUILANGLIST.bUseUseMachineConfigList", b_use_use_machine_config_list, 0x40, 0x8, true, 0x95385022e28d29ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muiregistryinfo_t*), "_MUILANGLIST.RegInfo", reg_info, 0x80, 0x40, true, 0xaf8440e2ed4538f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglistnode_t*), "_MUILANGLIST.Languages", languages, 0xc0, 0x40, true, 0x18e8cc27a9edbe5e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MUILANGLIST.ullMask", ull_mask, 0x100, 0x40, true, 0xef7147bdb6206b6b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUILANGLIST.uConsoleFlag", u_console_flag, 0x140, 0x20, true, 0x5a7f0d4ba2524bd1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 10>), "_MUILANGLIST.Checksum", checksum, 0x160, 0xa0, true, 0x5a91fb89cad9084a)
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
#endif