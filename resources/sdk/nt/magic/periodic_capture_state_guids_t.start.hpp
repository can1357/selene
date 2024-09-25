#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERIODIC_CAPTURE_STATE_GUIDS.ProviderCount", provider_count, 0x0, 0x10, true, 0xe35caf6b3d08d876)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_PERIODIC_CAPTURE_STATE_GUIDS.Providers", providers, 0x40, 0x40, true, 0x33200006490810b8)
#else
#define _m00
#define _m01
#endif