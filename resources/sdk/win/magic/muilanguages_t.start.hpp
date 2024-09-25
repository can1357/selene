#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUILANGUAGES.TotalSize", total_size, 0x0, 0x20, true, 0x5721b522a1331f44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGUAGES.MaxNumLanguages", max_num_languages, 0x20, 0x10, true, 0x56d73b22a43e166a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGUAGES.NumLanguages", num_languages, 0x30, 0x10, true, 0x860f82c35379af31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGUAGES.NumInstalledLanguages", num_installed_languages, 0x40, 0x10, true, 0xbd7973b3243610f1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanginfo_t*), "_MUILANGUAGES.LangInfos", lang_infos, 0x80, 0x40, true, 0xc19179b66d0f2cd9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif