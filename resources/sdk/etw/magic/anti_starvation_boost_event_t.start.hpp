#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_ANTI_STARVATION_BOOST_EVENT.ThreadId", thread_id, 0x0, 0x20, true, 0x9a4c86597e95131b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_ANTI_STARVATION_BOOST_EVENT.ProcessorIndex", processor_index, 0x20, 0x10, true, 0x4d6f946b85c2a6c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_ANTI_STARVATION_BOOST_EVENT.OldPriority", old_priority, 0x30, 0x8, true, 0xc2ce7c518eb67213)
#else
#define _m00
#define _m01
#define _m02
#endif