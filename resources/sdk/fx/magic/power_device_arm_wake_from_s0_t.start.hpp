#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxPowerDeviceArmWakeFromS0.m_Method", m_method, 0xc0, 0x40, true, 0xe90f101f734d5a57)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPowerDeviceArmWakeFromS0.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xea67039c765ece77)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerDeviceArmWakeFromS0.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x528bc14f3a1f9e2b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPowerDeviceArmWakeFromS0.m_Device", m_device, 0x100, 0x40, true, 0x49e3016949601da1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif