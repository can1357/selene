#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_SYSTEM_ENTROPY_TIMING_INFORMATION.EntropyRoutine", entropy_routine, 0x0, 0x40, true, 0x2928973c4e08b62f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, void*)>*), "_SYSTEM_ENTROPY_TIMING_INFORMATION.InitializationRoutine", initialization_routine, 0x40, 0x40, true, 0xa8155ce2b9833159)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_ENTROPY_TIMING_INFORMATION.InitializationContext", initialization_context, 0x80, 0x40, true, 0xc2155ab61f233940)
#else
#define _m00
#define _m01
#define _m02
#endif