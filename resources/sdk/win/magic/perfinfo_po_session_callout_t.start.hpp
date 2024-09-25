#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "_PERFINFO_PO_SESSION_CALLOUT.SystemAction", system_action, 0x0, 0x20, true, 0xa086ea1527297f17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_PERFINFO_PO_SESSION_CALLOUT.MinSystemState", min_system_state, 0x20, 0x20, true, 0x95d5ac46a4c277f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PO_SESSION_CALLOUT.Flags", flags, 0x40, 0x20, true, 0xa38016f08aeb3e21)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PO_SESSION_CALLOUT.PowerStateTask", power_state_task, 0x60, 0x20, true, 0x721b2cbdef404727)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif