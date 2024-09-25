#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPnpDeviceSelfManagedIoInit.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0x71799895bd1fefab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpDeviceSelfManagedIoInit.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xa4b4f9897189cb7f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxPnpDeviceSelfManagedIoInit.m_Method", m_method, 0xc0, 0x40, true, 0xa15eb9611ba8fc72)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPnpDeviceSelfManagedIoInit.m_Device", m_device, 0x100, 0x40, true, 0x4985c8f6889257fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif