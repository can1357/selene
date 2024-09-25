#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "FxPowerDeviceArmWakeFromSx.m_Method", m_method, 0xc0, 0x40, true, 0xcfeabbc50918c7ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_arm_wake_from_sx_with_reason_t ), "FxPowerDeviceArmWakeFromSx.m_MethodWithReason", m_method_with_reason, 0x100, 0x40, true, 0xf36c7e016d3b2c7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPowerDeviceArmWakeFromSx.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xcfde8b9cca3cbe65)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerDeviceArmWakeFromSx.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0x57cfcee07a61ae91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdevice_t*), "FxPowerDeviceArmWakeFromSx.m_Device", m_device, 0x140, 0x40, true, 0x84f0b44b0aabc3bc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerDeviceArmWakeFromSx.m_DeviceWakeEnabled", m_device_wake_enabled, 0x180, 0x8, true, 0x57dba071520b11d0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerDeviceArmWakeFromSx.m_ChildrenArmedForWake", m_children_armed_for_wake, 0x188, 0x8, true, 0x22841efc3605ac76)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif