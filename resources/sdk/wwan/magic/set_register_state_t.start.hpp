#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 7>), "_WWAN_SET_REGISTER_STATE.ProviderId", provider_id, 0x0, 0x70, true, 0x4cada0796dcd6f71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::register_action_t), "_WWAN_SET_REGISTER_STATE.RegisterAction", register_action, 0x80, 0x20, true, 0xb518e48916159eef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_SET_REGISTER_STATE.WwanDataClass", wwan_data_class, 0xa0, 0x20, true, 0x124574057d5d1696)
#else
#define _m00
#define _m01
#define _m02
#endif