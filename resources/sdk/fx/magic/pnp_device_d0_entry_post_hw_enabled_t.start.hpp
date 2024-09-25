#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceD0EntryPostHwEnabled.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xcd92ce9912fe101e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceD0EntryPostHwEnabled.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x47a829a54dbdf717)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceD0EntryPostHwEnabled.m_Device", m_device, 0xc0, 0x40, true, 0xc1a27630cdbbf50b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_device_state_t), "FxPnpDeviceD0EntryPostHwEnabled.m_PreviousState", m_previous_state, 0x100, 0x20, true, 0x7d19a34f5185177f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif