#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_pwr_requirement_machine_t*), "FxPoxInterface.m_DevicePowerRequirementMachine", m_device_power_requirement_machine, 0x0, 0x40, true, 0x6247f290f7e199bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPoxInterface.m_NextIdleTimeoutHint", m_next_idle_timeout_hint, 0x40, 0x20, true, 0xf889b32cef41c431)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPoxInterface.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xa40d3cf344063cae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "FxPoxInterface.m_PoHandle", m_po_handle, 0xc0, 0x40, true, 0xfe8ef504676b3c2b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPoxInterface.m_DevicePowerRequired", m_device_power_required, 0x100, 0x8, true, 0x5089ee8fd2ae11fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPoxInterface.m_DevicePowerRequiredLock", m_device_power_required_lock, 0x140, 0x80, true, 0x77485b6fe7f047c1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPoxInterface.m_CurrentIdleTimeoutHint", m_current_idle_timeout_hint, 0x1c0, 0x20, true, 0x7082f82beb1804ca)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxPoxInterface.m_DirectedTransitionActive", m_directed_transition_active, 0x1e0, 0x20, true, 0x1bfb454d15cbc8b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif