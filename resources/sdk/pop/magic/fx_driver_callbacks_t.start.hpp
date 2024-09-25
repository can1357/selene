#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POP_FX_DRIVER_CALLBACKS.ComponentActive", component_active, 0x0, 0x40, true, 0x238879df1b32281c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POP_FX_DRIVER_CALLBACKS.ComponentIdle", component_idle, 0x40, 0x40, true, 0xa4739f084d30fb4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_POP_FX_DRIVER_CALLBACKS.ComponentIdleState", component_idle_state, 0x80, 0x40, true, 0x46f7b6013a2c7be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_POP_FX_DRIVER_CALLBACKS.DevicePowerRequired", device_power_required, 0xc0, 0x40, true, 0xa183fbb81b881254)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_POP_FX_DRIVER_CALLBACKS.DevicePowerNotRequired", device_power_not_required, 0x100, 0x40, true, 0x7d65b2db5b9510dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*), "_POP_FX_DRIVER_CALLBACKS.PowerControl", power_control, 0x140, 0x40, true, 0xe1aee66a5de3c5cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint8_t)>*), "_POP_FX_DRIVER_CALLBACKS.ComponentCriticalTransition", component_critical_transition, 0x180, 0x40, true, 0x4f1eeff1c0095b29)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct nt::device_object_t*, uint32_t)>*), "_POP_FX_DRIVER_CALLBACKS.DripsWatchdogCallback", drips_watchdog_callback, 0x1c0, 0x40, true, 0x95b2d275bfb3f697)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POP_FX_DRIVER_CALLBACKS.DirectedPowerUpCallback", directed_power_up_callback, 0x200, 0x40, true, 0x1d51ebeddfbe84cb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POP_FX_DRIVER_CALLBACKS.DirectedPowerDownCallback", directed_power_down_callback, 0x240, 0x40, true, 0xde98941f7c7d851b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif