#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SEMAPHORE_BASIC_INFORMATION.CurrentCount", current_count, 0x0, 0x20, true, 0x5b48e4b74ecd4ade)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SEMAPHORE_BASIC_INFORMATION.MaximumCount", maximum_count, 0x20, 0x20, true, 0x749ad79954ff81f2)
#else
#define _m00
#define _m01
#endif