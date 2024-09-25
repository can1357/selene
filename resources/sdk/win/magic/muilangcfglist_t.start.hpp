#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUILANGCFGLIST.TotalSize", total_size, 0x0, 0x20, true, 0x976835400c44522a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGCFGLIST.NumLanguages", num_languages, 0x20, 0x10, true, 0xcea9c4ffa47a76c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGCFGLIST.MaxNumLanguages", max_num_languages, 0x30, 0x10, true, 0x4b5021371e06ecaf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilangcfgnode_t*), "_MUILANGCFGLIST.LanguageConfigs", language_configs, 0x40, 0x40, true, 0x7ee7e9dc335dd31c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif