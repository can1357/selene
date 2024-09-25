#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_self_managed_io_cleanup_t), "FxSelfManagedIoMachine.m_DeviceSelfManagedIoCleanup", m_device_self_managed_io_cleanup, 0x0, 0x40, true, 0x10b962224d3736d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_self_managed_io_flush_t), "FxSelfManagedIoMachine.m_DeviceSelfManagedIoFlush", m_device_self_managed_io_flush, 0x140, 0x40, true, 0x8c7c834a5ce846fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_self_managed_io_init_t), "FxSelfManagedIoMachine.m_DeviceSelfManagedIoInit", m_device_self_managed_io_init, 0x280, 0x40, true, 0xdbbe90b6fce9fb4e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_self_managed_io_suspend_t), "FxSelfManagedIoMachine.m_DeviceSelfManagedIoSuspend", m_device_self_managed_io_suspend, 0x3c0, 0x80, true, 0x82f0d34e8d581edb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_self_managed_io_restart_t), "FxSelfManagedIoMachine.m_DeviceSelfManagedIoRestart", m_device_self_managed_io_restart, 0x540, 0x40, true, 0x9354f4fc025fba28)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxSelfManagedIoMachine.m_StateMachineLock", m_state_machine_lock, 0x680, 0x40, true, 0x5c92ff5a36d4851a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxSelfManagedIoMachine.m_PkgPnp", m_pkg_pnp, 0x7c0, 0x40, true, 0xf014979c998a1069)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSelfManagedIoMachine.m_CurrentState", m_current_state, 0x800, 0x8, true, 0x49a86b739abb16f3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSelfManagedIoMachine.m_EventHistoryIndex", m_event_history_index, 0x808, 0x8, true, 0xd894d1e11a201d2f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSelfManagedIoMachine.m_StateHistoryIndex", m_state_history_index, 0x810, 0x8, true, 0xa95987151a837890)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::self_managed_io_machine_event_history_t), "FxSelfManagedIoMachine.m_Events", m_events, 0x820, 0x40, true, 0xecea69f83d882357)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::self_managed_io_machine_state_history_t), "FxSelfManagedIoMachine.m_States", m_states, 0x860, 0x40, true, 0x8294ab34a6680ccb)
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
#define _m10
#define _m11
#endif