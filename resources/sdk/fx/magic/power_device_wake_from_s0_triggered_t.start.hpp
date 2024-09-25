#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPowerDeviceWakeFromS0Triggered.m_Method", m_method, 0xc0, 0x40, true, 0x19c6299c9e7b9cda)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPowerDeviceWakeFromS0Triggered.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xbac37e9a8ac5844b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerDeviceWakeFromS0Triggered.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x2f2cac5f55380f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPowerDeviceWakeFromS0Triggered.m_Device", m_device, 0x100, 0x40, true, 0xe15b82233dd2328a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif