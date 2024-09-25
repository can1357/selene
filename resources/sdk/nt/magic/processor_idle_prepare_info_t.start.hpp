#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESSOR_IDLE_PREPARE_INFO.Context", context, 0x0, 0x40, true, 0xd32a158a2be24919)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_idle_constraints_t), "_PROCESSOR_IDLE_PREPARE_INFO.Constraints", constraints, 0x40, 0x80, true, 0x824835c4427109c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_PREPARE_INFO.DependencyCount", dependency_count, 0x1c0, 0x20, true, 0x4ac39f10ab98504f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_PREPARE_INFO.DependencyUsed", dependency_used, 0x1e0, 0x20, true, 0xcf77e28d7785db2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_idle_dependency_t*), "_PROCESSOR_IDLE_PREPARE_INFO.DependencyArray", dependency_array, 0x200, 0x40, true, 0xc3cfe6425ee7f35d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_PREPARE_INFO.PlatformIdleStateIndex", platform_idle_state_index, 0x240, 0x20, true, 0x4bd5587bb0d3a08c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_PREPARE_INFO.ProcessorIdleStateIndex", processor_idle_state_index, 0x260, 0x20, true, 0x462ee5f4b98b6058)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_PREPARE_INFO.IdleSelectFailureMask", idle_select_failure_mask, 0x280, 0x20, true, 0x33dfaa170327abb5)
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