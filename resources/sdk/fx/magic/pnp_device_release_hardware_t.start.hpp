#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceReleaseHardware.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xa91a1b7bf289a6ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceReleaseHardware.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xc169a14d96cc5bc9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "FxPnpDeviceReleaseHardware.m_Method", m_method, 0xc0, 0x40, true, 0x71b8c4ec1340c685)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceReleaseHardware.m_Device", m_device, 0x100, 0x40, true, 0xa46abe6ea3b2582d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcmreslist_t*), "FxPnpDeviceReleaseHardware.m_ResourcesTranslated", m_resources_translated, 0x140, 0x40, true, 0xda2505d3858364b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif