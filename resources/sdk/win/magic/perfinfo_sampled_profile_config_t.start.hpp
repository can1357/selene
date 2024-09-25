#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SAMPLED_PROFILE_CONFIG.Source", source, 0x0, 0x20, true, 0xe13c1a93921ab95a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SAMPLED_PROFILE_CONFIG.NewInterval", new_interval, 0x20, 0x20, true, 0x98bfd3d49c4830d1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SAMPLED_PROFILE_CONFIG.OldInterval", old_interval, 0x40, 0x20, true, 0x76ec4f491c63e760)
#else
#define _m00
#define _m01
#define _m02
#endif