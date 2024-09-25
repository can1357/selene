#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "FxPowerDeviceDisarmWakeFromS0.m_Method", m_method, 0xc0, 0x40, true, 0x84e2869e4ba4d3c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPowerDeviceDisarmWakeFromS0.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xeb0c886c9817415)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerDeviceDisarmWakeFromS0.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x8ee77b3fbb32a35c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPowerDeviceDisarmWakeFromS0.m_Device", m_device, 0x100, 0x40, true, 0x323c3f8b4fb56954)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif