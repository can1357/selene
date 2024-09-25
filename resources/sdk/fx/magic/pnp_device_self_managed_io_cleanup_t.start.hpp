#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceSelfManagedIoCleanup.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xf6360604c08b64ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceSelfManagedIoCleanup.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xdbc0dadc2520d359)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPnpDeviceSelfManagedIoCleanup.m_Method", m_method, 0xc0, 0x40, true, 0x223d4a18cd6dde38)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceSelfManagedIoCleanup.m_Device", m_device, 0x100, 0x40, true, 0xea124027d4d17e08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif