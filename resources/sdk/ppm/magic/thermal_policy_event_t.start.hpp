#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PPM_THERMAL_POLICY_EVENT.Mode", mode, 0x0, 0x8, true, 0x1f3e8507d20f5f44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_THERMAL_POLICY_EVENT.Processors", processors, 0x40, 0x40, true, 0xf3fa679c7467f9f3)
#else
#define _m00
#define _m01
#endif