#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDevicePrepareHardware.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xa5c168d2a5214857)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDevicePrepareHardware.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x34a1ac65cb9be115)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "FxPnpDevicePrepareHardware.m_Method", m_method, 0xc0, 0x40, true, 0xf6ee27884118e848)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDevicePrepareHardware.m_Device", m_device, 0x100, 0x40, true, 0x869ed9b9ddc0d2f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcmreslist_t*), "FxPnpDevicePrepareHardware.m_ResourcesRaw", m_resources_raw, 0x140, 0x40, true, 0x3e884cf9aa4cf62)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcmreslist_t*), "FxPnpDevicePrepareHardware.m_ResourcesTranslated", m_resources_translated, 0x180, 0x40, true, 0xb4ab2c529e2c7546)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif