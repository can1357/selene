#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_lfh_config_t), "_RTL_HP_SUB_ALLOCATOR_CONFIGS.LfhConfigs", lfh_configs, 0x0, 0x20, true, 0x7657ad2233c4a274)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_vs_config_t), "_RTL_HP_SUB_ALLOCATOR_CONFIGS.VsConfigs", vs_configs, 0x20, 0x20, true, 0x8ae0fed17d69c182)
#else
#define _m00
#define _m01
#endif