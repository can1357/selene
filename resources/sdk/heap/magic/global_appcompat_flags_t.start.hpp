#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_GLOBAL_APPCOMPAT_FLAGS.SafeInputValidation", safe_input_validation, 0x0, 0x1, true, 0x8e19b228479ed9cb, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_GLOBAL_APPCOMPAT_FLAGS.CommitLFHSubsegments", commit_lfh_subsegments, 0x2, 0x1, true, 0xdc08626fe031b827, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_GLOBAL_APPCOMPAT_FLAGS.AllocateHeapFromEnv", allocate_heap_from_env, 0x3, 0x1, true, 0x461c5683919f2038, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif