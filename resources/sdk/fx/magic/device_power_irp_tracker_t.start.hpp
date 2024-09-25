#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_d_irp_reason_t), "FxDevicePowerIrpTracker.m_DIrpRequestedForSIrp", m_d_irp_requested_for_s_irp, 0x0, 0x20, true, 0x93d635f97b64d211)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "FxDevicePowerIrpTracker.m_S0PowerAction", m_s0_power_action, 0x20, 0x20, true, 0x91ad803502b491b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "FxDevicePowerIrpTracker.m_SxPowerAction", m_sx_power_action, 0x40, 0x20, true, 0xefd800553b52a5bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePowerIrpTracker.m_HistoryIndex", m_history_index, 0x60, 0x8, true, 0xf8d05f5f224afcf6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif