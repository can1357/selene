#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceSelfManagedIoSuspend.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x623c116a482c6334)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceSelfManagedIoSuspend.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xbdd6c18ddd271ab6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxPnpDeviceSelfManagedIoSuspend.m_Method", m_method, 0xc0, 0x40, true, 0x70f3ff25a187a9e2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceSelfManagedIoSuspend.m_Device", m_device, 0x100, 0x40, true, 0x477f8d43f6e9ab43)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_device_state_t), "FxPnpDeviceSelfManagedIoSuspend.m_TargetState", m_target_state, 0x140, 0x20, true, 0x5b37d87df77641b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif