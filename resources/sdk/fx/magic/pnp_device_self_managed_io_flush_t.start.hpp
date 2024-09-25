#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceSelfManagedIoFlush.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x5892df3c8632224c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceSelfManagedIoFlush.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xa7dffe75763357b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPnpDeviceSelfManagedIoFlush.m_Method", m_method, 0xc0, 0x40, true, 0x5bf22c7e3a0ca29e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceSelfManagedIoFlush.m_Device", m_device, 0x100, 0x40, true, 0xac446cd4f0be645e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif