#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_POWER_THROTTLING_STATE.Version", version, 0x0, 0x20, true, 0xf2aa7059abc57ffb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_POWER_THROTTLING_STATE.ControlMask", control_mask, 0x20, 0x20, true, 0x939071d0ef075267)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_POWER_THROTTLING_STATE.StateMask", state_mask, 0x40, 0x20, true, 0x4a762c12842d040c)
#else
#define _m00
#define _m01
#define _m02
#endif