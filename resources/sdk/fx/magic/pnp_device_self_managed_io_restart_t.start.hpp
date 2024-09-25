#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceSelfManagedIoRestart.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x93645be31c718785)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceSelfManagedIoRestart.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x6a44f0c7e1a7f8c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxPnpDeviceSelfManagedIoRestart.m_Method", m_method, 0xc0, 0x40, true, 0xf25ccea8acb07c99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceSelfManagedIoRestart.m_Device", m_device, 0x100, 0x40, true, 0xf75ec327db080744)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif