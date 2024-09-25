#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::device_pwr_requirement_events_t), "FxDevicePwrRequirementTargetState.DprEvent", dpr_event, 0x0, 0x20, true, 0xbec71e94ade31fc5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::device_pwr_requirement_states_t), "FxDevicePwrRequirementTargetState.DprState", dpr_state, 0x20, 0x20, true, 0x17e7645d495eee40)
#else
#define _m00
#define _m01
#endif