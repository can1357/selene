#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_POWER_THROTTLING_STATE.Version", version, 0x0, 0x20, true, 0xd2aeb1550f30b54e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_POWER_THROTTLING_STATE.ControlMask", control_mask, 0x20, 0x20, true, 0xc6dc12c0768dd03d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_POWER_THROTTLING_STATE.StateMask", state_mask, 0x40, 0x20, true, 0xa42c12aacc128c62)
#else
#define _m00
#define _m01
#define _m02
#endif