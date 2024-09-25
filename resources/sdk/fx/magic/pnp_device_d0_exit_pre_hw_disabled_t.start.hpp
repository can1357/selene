#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceD0ExitPreHwDisabled.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x10bd8e64555b68c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceD0ExitPreHwDisabled.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xda012968d7636f53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceD0ExitPreHwDisabled.m_Device", m_device, 0xc0, 0x40, true, 0xd4190b387b824726)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_device_state_t), "FxPnpDeviceD0ExitPreHwDisabled.m_TargetState", m_target_state, 0x100, 0x20, true, 0x9a678d0d19e9ac5c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif