#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT_ARM64.ControlPc", control_pc, 0x0, 0x0, false, 0x5e7882042e02480d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT_ARM64.ImageBase", image_base, 0x0, 0x0, false, 0x5f3f396dd424fe99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::arm64_runtime_function_entry_t*), "_DISPATCHER_CONTEXT_ARM64.FunctionEntry", function_entry, 0x0, 0x0, false, 0x7519d88689297295)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT_ARM64.EstablisherFrame", establisher_frame, 0x0, 0x0, false, 0x91959e2157f79d35)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT_ARM64.TargetPc", target_pc, 0x0, 0x0, false, 0x3f9047a221367484)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::arm64_nt_context_t*), "_DISPATCHER_CONTEXT_ARM64.ContextRecord", context_record, 0x0, 0x0, false, 0x49c6ac80c3e4c4de)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pexception_routine_t ), "_DISPATCHER_CONTEXT_ARM64.LanguageHandler", language_handler, 0x0, 0x0, false, 0x4b7f563725cb968f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DISPATCHER_CONTEXT_ARM64.HandlerData", handler_data, 0x0, 0x0, false, 0xcea68275f03b73b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::unwind_history_table_t*), "_DISPATCHER_CONTEXT_ARM64.HistoryTable", history_table, 0x0, 0x0, false, 0x5c3a65322feccda0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPATCHER_CONTEXT_ARM64.ScopeIndex", scope_index, 0x0, 0x0, false, 0x9e53190f63d4a657)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_CONTEXT_ARM64.ControlPcIsUnwound", control_pc_is_unwound, 0x0, 0x0, false, 0x4be338eb9d46fb13)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DISPATCHER_CONTEXT_ARM64.NonVolatileRegisters", non_volatile_registers, 0x0, 0x0, false, 0xd3ba2d114b7e5064)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif