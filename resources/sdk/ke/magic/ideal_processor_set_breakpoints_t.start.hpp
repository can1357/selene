#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ke::process_concurrency_count_t), "_KE_IDEAL_PROCESSOR_SET_BREAKPOINTS.Low", low, 0x0, 0x0, false, 0x8efed757715753df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ke::process_concurrency_count_t), "_KE_IDEAL_PROCESSOR_SET_BREAKPOINTS.High", high, 0x0, 0x0, false, 0xe1132379b8a9980f)
#else
#define _m00
#define _m01
#endif