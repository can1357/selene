#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceSurpriseRemoval.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xcedb99eaf3d71906)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceSurpriseRemoval.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x93179f85b371d81d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPnpDeviceSurpriseRemoval.m_Method", m_method, 0xc0, 0x40, true, 0xf287938f55634bbe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceSurpriseRemoval.m_Device", m_device, 0x100, 0x40, true, 0x811d58a61687aad0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif