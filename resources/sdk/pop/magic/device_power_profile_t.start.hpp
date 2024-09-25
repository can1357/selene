#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_DEVICE_POWER_PROFILE.DeviceId", device_id, 0x0, 0x80, true, 0x8340b1f0b7725a4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::power_plane_t*), "_POP_DEVICE_POWER_PROFILE.PowerPlane", power_plane, 0x80, 0x40, true, 0x4c6aab168afc5609)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_device_t*), "_POP_DEVICE_POWER_PROFILE.FxDevice", fx_device, 0xc0, 0x40, true, 0x2aad14a66cd5ea6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_DEVICE_POWER_PROFILE.PowerDrawMw", power_draw_mw, 0x100, 0x20, true, 0xbf32b493be7a6bca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::power_plane_profile_t, 4>), "_POP_DEVICE_POWER_PROFILE.DxPower", dx_power, 0x120, 0x0, true, 0xc70763b536899ea3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_DEVICE_POWER_PROFILE.ComponentCount", component_count, 0x240, 0x40, true, 0xa45b43f275bb1576)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::component_power_profile_t**), "_POP_DEVICE_POWER_PROFILE.Components", components, 0x280, 0x40, true, 0xf01c22e0e0e521df)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif