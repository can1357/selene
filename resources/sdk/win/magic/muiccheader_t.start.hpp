#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCHEADER.ulMaxStringsSize", ul_max_strings_size, 0x0, 0x20, true, 0xdd566523707217cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCHEADER.ulSizeStrings", ul_size_strings, 0x20, 0x20, true, 0x884187d7d366d23d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCHEADER.ulMaxNumInstalledCultures", ul_max_num_installed_cultures, 0x40, 0x20, true, 0x213ff180a5d0d2c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCHEADER.ulNumInstalledCultures", ul_num_installed_cultures, 0x60, 0x20, true, 0x65e480765914daf8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCHEADER.ulMaxNumUnverifiedCultures", ul_max_num_unverified_cultures, 0x80, 0x20, true, 0x2cc4eb6d59160ebd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUICCHEADER.ulNumUnverifiedCultures", ul_num_unverified_cultures, 0xa0, 0x20, true, 0xdbce9de2c7c72769)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif