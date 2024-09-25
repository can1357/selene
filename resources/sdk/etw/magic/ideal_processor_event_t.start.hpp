#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_IDEAL_PROCESSOR_EVENT.ThreadId", thread_id, 0x0, 0x20, true, 0xb4d42dc4312b6a2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_IDEAL_PROCESSOR_EVENT.OldIdealProcessor", old_ideal_processor, 0x20, 0x20, true, 0x24a406ab46304702)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_IDEAL_PROCESSOR_EVENT.NewIdealProcessor", new_ideal_processor, 0x40, 0x20, true, 0xce6d39d5f72ca34d)
#else
#define _m00
#define _m01
#define _m02
#endif