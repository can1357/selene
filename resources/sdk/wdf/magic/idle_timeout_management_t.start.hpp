#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "IdleTimeoutManagement.m_IdleTimeoutStatus", m_idle_timeout_status, 0x0, 0x20, true, 0x20a719839a244df7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pox::settings_t*), "IdleTimeoutManagement.m_PoxSettings", m_pox_settings, 0x40, 0x40, true, 0xfe282ba1f13d0a9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdleTimeoutManagement.m_DirectedTransitionsSupported", m_directed_transitions_supported, 0x80, 0x8, true, 0x51a714f7d4a8b602)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdleTimeoutManagement.m_DirectedTransitionsChildrenOptional", m_directed_transitions_children_optional, 0x88, 0x8, true, 0xcf9b4904fa490658)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "IdleTimeoutManagement.m_PoFxDeviceFlags", m_po_fx_device_flags, 0x0, 0x0, false, 0x53addb7fd440a25f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IdleTimeoutManagement.m_UseWdfTimerForPofx", m_use_wdf_timer_for_pofx, 0x0, 0x0, false, 0x8bd913eab5eaa0ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif