#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_SET_POWER_ACTION_RET.Trigger", trigger, 0x0, 0x40, true, 0x6ed9733f469d584b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_SET_POWER_ACTION_RET.Status", status, 0x40, 0x20, true, 0x682c36255c38e01f)
#else
#define _m00
#define _m01
#endif