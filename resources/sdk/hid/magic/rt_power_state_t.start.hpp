#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_STATE.PowerReferenceAcquired", power_reference_acquired, 0x0, 0x1, true, 0xfd188502b2e179b3, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_STATE.ArmForWake", arm_for_wake, 0x1, 0x1, true, 0x1e05845ca1fab73e, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_STATE.IdleTimeout", idle_timeout, 0x20, 0x20, true, 0x587c9b14a03146b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HID_RT_POWER_STATE.IdleTimeoutInMsec", idle_timeout_in_msec, 0x0, 0x0, false, 0x48700624c9cc65dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif