#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PRIORITY_EVENT.ThreadId", thread_id, 0x0, 0x20, true, 0x7c07678a214ab8db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_PRIORITY_EVENT.OldPriority", old_priority, 0x20, 0x8, true, 0x4c9f297d2a925c4b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_PRIORITY_EVENT.NewPriority", new_priority, 0x28, 0x8, true, 0x68eee9c64e18de0f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_PRIORITY_EVENT.DynamicPriority", dynamic_priority, 0x30, 0x8, true, 0xb6643abd06c3c86a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif