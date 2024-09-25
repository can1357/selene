#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT.ControlPc", control_pc, 0x0, 0x40, true, 0x4039d3d8969fa5bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT.ImageBase", image_base, 0x40, 0x40, true, 0x1a5d40bb10b14d08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::runtime_function_entry_t*), "_DISPATCHER_CONTEXT.FunctionEntry", function_entry, 0x80, 0x40, true, 0x8bfa5a08f36dafab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT.EstablisherFrame", establisher_frame, 0xc0, 0x40, true, 0xef023e1e6856fd4c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISPATCHER_CONTEXT.TargetIp", target_ip, 0x100, 0x40, true, 0xaaa90d1dd0557e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context*), "_DISPATCHER_CONTEXT.ContextRecord", context_record, 0x140, 0x40, true, 0xf633eba237bffd4d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pexception_routine_t ), "_DISPATCHER_CONTEXT.LanguageHandler", language_handler, 0x180, 0x40, true, 0x8e3adc22034bae83)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DISPATCHER_CONTEXT.HandlerData", handler_data, 0x1c0, 0x40, true, 0x83f88bf36b660d9d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::unwind_history_table_t*), "_DISPATCHER_CONTEXT.HistoryTable", history_table, 0x200, 0x40, true, 0xa5cfd7aef76c07d6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPATCHER_CONTEXT.ScopeIndex", scope_index, 0x240, 0x20, true, 0xd1ade1fd5cb86a2e)
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
#endif