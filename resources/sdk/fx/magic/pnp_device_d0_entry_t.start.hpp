#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceD0Entry.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x1afd559e2688e30d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceD0Entry.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x5111a250d45aadad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "FxPnpDeviceD0Entry.m_Method", m_method, 0xc0, 0x40, true, 0x69858ef9a7bc912d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceD0Entry.m_Device", m_device, 0x100, 0x40, true, 0xcd3847d9f15b9396)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_device_state_t), "FxPnpDeviceD0Entry.m_PreviousState", m_previous_state, 0x140, 0x20, true, 0x4c59c1db3b2cc951)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif