#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_THREAD_FEEDBACK_READ.ThreadId", thread_id, 0x0, 0x0, false, 0xf092f545a514b5ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_THREAD_FEEDBACK_READ.ProcessorIndex", processor_index, 0x0, 0x0, false, 0x439bd3d9590d4198)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_THREAD_FEEDBACK_READ.Feedback", feedback, 0x0, 0x0, false, 0x35fc788c54279120)
#else
#define _m00
#define _m01
#define _m02
#endif