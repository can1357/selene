#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPowerDeviceDisarmWakeFromSx.m_Method", m_method, 0xc0, 0x40, true, 0x9a182f92ad248c48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPowerDeviceDisarmWakeFromSx.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x7d13785a86bbdd14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerDeviceDisarmWakeFromSx.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x7dfa3d912f1e0224)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPowerDeviceDisarmWakeFromSx.m_Device", m_device, 0x100, 0x40, true, 0x4fa68aeafa2551d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif