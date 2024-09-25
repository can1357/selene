#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectionContextSize", reflection_context_size, 0x0, 0x40, true, 0xb5cefac4068aaaf5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectionFlags", reflection_flags, 0x40, 0x20, true, 0x6400ca85ab6398ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectionRoutine", reflection_routine, 0x80, 0x40, true, 0x7156e4433efcbb75)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectionParameter", reflection_parameter, 0xc0, 0x40, true, 0xece5f36737745a94)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectedProcessCreatedEvent", reflected_process_created_event, 0x100, 0x40, true, 0x7c43ac5af54b93d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectedProcessHandlesDuplicatedEvent", reflected_process_handles_duplicated_event, 0x140, 0x40, true, 0xd328fab7e6baaffa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectionStartEvent", reflection_start_event, 0x180, 0x40, true, 0x15a7d027d37e2243)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(rtlp_process_reflection_reflection_information_t ), "_RTLP_PROCESS_REFLECTION_CONTEXT.ReflectionInformation", reflection_information, 0x1c0, 0x0, true, 0x949f7be964901278)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif