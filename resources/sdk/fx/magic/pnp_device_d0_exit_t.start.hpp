#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceD0Exit.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xfa80f294990f74e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceD0Exit.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x758d2184ad2f0f84)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxPnpDeviceD0Exit.m_Method", m_method, 0xc0, 0x40, true, 0x946249590371fde5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceD0Exit.m_Device", m_device, 0x100, 0x40, true, 0xbba88c2f9898999c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_device_state_t), "FxPnpDeviceD0Exit.m_TargetState", m_target_state, 0x140, 0x20, true, 0x365981b8cefcaf38)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif