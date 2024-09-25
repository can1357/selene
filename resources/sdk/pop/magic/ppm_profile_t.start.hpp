#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_POP_PPM_PROFILE.Name", name, 0x0, 0x40, true, 0xa276a08bead83834)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_PPM_PROFILE.Id", id, 0x40, 0x8, true, 0xede3bfeabef35030)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_POP_PPM_PROFILE.Guid", guid, 0x60, 0x80, true, 0x32b994cf7e8be05a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_PPM_PROFILE.Flags", flags, 0xe0, 0x20, true, 0xb5bf0ad6eb4459af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_PPM_PROFILE.Priority", priority, 0x100, 0x8, true, 0xbd1dc7173192efd0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::engine_settings_t, 2>), "_POP_PPM_PROFILE.Settings", settings, 0x140, 0x0, true, 0x966ce721ec641243)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PPM_PROFILE.StartTime", start_time, 0xac40, 0x40, true, 0x267ad3bee5155082)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PPM_PROFILE.Count", count, 0xac80, 0x40, true, 0x8f8bab100afd66f5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PPM_PROFILE.MaxDuration", max_duration, 0xacc0, 0x40, true, 0xf73fc29ee2e1ca12)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PPM_PROFILE.MinDuration", min_duration, 0xad00, 0x40, true, 0xf229e2856c0a8c1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_PPM_PROFILE.TotalDuration", total_duration, 0xad40, 0x40, true, 0xcfe89033bbc503bc)
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
#define _m10
#endif