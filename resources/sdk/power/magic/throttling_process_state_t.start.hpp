#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_THROTTLING_PROCESS_STATE.Version", version, 0x0, 0x20, true, 0xdd2bd4e2f2c56aae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_THROTTLING_PROCESS_STATE.ControlMask", control_mask, 0x20, 0x20, true, 0xac3bdbf2956b423c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_THROTTLING_PROCESS_STATE.StateMask", state_mask, 0x40, 0x20, true, 0x6b9f11c335ef0726)
#else
#define _m00
#define _m01
#define _m02
#endif