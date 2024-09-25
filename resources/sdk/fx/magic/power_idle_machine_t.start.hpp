#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FxPowerIdleMachine.m_PowerTimeout", m_power_timeout, 0x0, 0x40, true, 0x2f2eda7b8167047a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPowerIdleMachine.m_Lock", m_lock, 0x40, 0x80, true, 0x952225c3762739b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerIdleMachine.m_IoCount", m_io_count, 0xc0, 0x20, true, 0x8fbcc51828a8432a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::tag_tracker_t*), "FxPowerIdleMachine.m_TagTracker", m_tag_tracker, 0x100, 0x40, true, 0xa702f8858c610bb6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::timer_t), "FxPowerIdleMachine.m_PowerTimeoutTimer", m_power_timeout_timer, 0x140, 0xc0, true, 0xbb726b2bda26bdbb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxPowerIdleMachine.m_D0NotificationEvent", m_d0_notification_event, 0x600, 0x0, true, 0x2897c75ce452d5d1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerIdleMachine.m_Flags", m_flags, 0x700, 0x8, true, 0x92d78d4533a8581f)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.TimerEnabled", timer_enabled, 0x0, 0x1, true, 0xf13761e675c655e9, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.InDx", in_dx, 0x1, 0x1, true, 0x47b231c2c0edc52c, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.TimerCanceled", timer_canceled, 0x2, 0x1, true, 0x1abd78fbb4d69f42, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.TimerStarted", timer_started, 0x3, 0x1, true, 0xacaea149ef42507d, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.TimerPowerFailed", timer_power_failed, 0x4, 0x1, true, 0x51f367b0e9abc3cb, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.IsStarted", is_started, 0x5, 0x1, true, 0xf8e3be2e705056ff, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.IoPresentSent", io_present_sent, 0x6, 0x1, true, 0x30add3209c475114, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerIdleMachine.m_FlagsByName.SendPnpPowerUpEvent", send_pnp_power_up_event, 0x7, 0x1, true, 0x88a7213701f6954b, 1, uint8_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_flags_by_name_t), "FxPowerIdleMachine.m_FlagsByName", m_flags_by_name, 0x700, 0x8, true, 0x394ff89d9aa19b48)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerIdleMachine.m_EventHistoryIndex", m_event_history_index, 0x708, 0x8, true, 0x96d7794511ed4797)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerIdleMachine.m_StateHistoryIndex", m_state_history_index, 0x710, 0x8, true, 0xc250edce486f376f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::power_idle_states_t), "FxPowerIdleMachine.m_CurrentIdleState", m_current_idle_state, 0x720, 0x20, true, 0x18f8b1f6ef4fe273)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fx::power_idle_events_t, 8>), "FxPowerIdleMachine.m_EventHistory", m_event_history, 0x740, 0x0, true, 0xdfbe49a9c84c2a4c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fx::power_idle_states_t, 8>), "FxPowerIdleMachine.m_StateHistory", m_state_history, 0x840, 0x0, true, 0xd3d44bcdf04bc1c6)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif