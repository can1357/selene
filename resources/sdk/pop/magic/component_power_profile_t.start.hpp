#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_POP_COMPONENT_POWER_PROFILE.ComponentGuid", component_guid, 0x0, 0x80, true, 0x324147a8ad22d135)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::device_power_profile_t*), "_POP_COMPONENT_POWER_PROFILE.Device", device, 0x80, 0x40, true, 0x23b66509343316d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_COMPONENT_POWER_PROFILE.FxCount", fx_count, 0xc0, 0x40, true, 0x6edd75c78a6534fe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::power_plane_profile_t, 1>), "_POP_COMPONENT_POWER_PROFILE.FxPower", fx_power, 0x100, 0x40, true, 0xb11733a286abaf3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif