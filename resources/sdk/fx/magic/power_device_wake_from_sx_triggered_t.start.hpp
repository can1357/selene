#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPowerDeviceWakeFromSxTriggered.m_Method", m_method, 0xc0, 0x40, true, 0x45711493a4a514e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPowerDeviceWakeFromSxTriggered.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xd85b394a9f019287)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerDeviceWakeFromSxTriggered.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x5692db7f62aca65c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPowerDeviceWakeFromSxTriggered.m_Device", m_device, 0x100, 0x40, true, 0xb0e0120997fe530f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif