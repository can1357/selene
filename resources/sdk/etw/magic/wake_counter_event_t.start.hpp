#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_WAKE_COUNTER_EVENT.Object", object, 0x0, 0x40, true, 0x9163f10f61da23f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_WAKE_COUNTER_EVENT.Tag", tag, 0x40, 0x40, true, 0xee87ad47c1b2eb71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WAKE_COUNTER_EVENT.ProcessId", process_id, 0x80, 0x20, true, 0xa28e82b203e81cc9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_WAKE_COUNTER_EVENT.Count", count, 0xa0, 0x20, true, 0x8ea28dbe649fa145)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif