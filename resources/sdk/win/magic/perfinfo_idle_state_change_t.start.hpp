#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IDLE_STATE_CHANGE.State", state, 0x0, 0x20, true, 0xa2fe060086182732)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IDLE_STATE_CHANGE.Throttle", throttle, 0x20, 0x20, true, 0xae0f57f6ce3052a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IDLE_STATE_CHANGE.Direction", direction, 0x40, 0x20, true, 0x504b7443690d19c8)
#else
#define _m00
#define _m01
#define _m02
#endif