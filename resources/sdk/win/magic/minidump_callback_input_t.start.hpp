#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_INPUT.ProcessId", process_id, 0x0, 0x20, true, 0x1e8965afef2b0ba5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_CALLBACK_INPUT.ProcessHandle", process_handle, 0x20, 0x40, true, 0x559fe88386d7206b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_INPUT.CallbackType", callback_type, 0x60, 0x20, true, 0x960071d1fbe5780f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_MINIDUMP_CALLBACK_INPUT.Status", status, 0x80, 0x20, true, 0xbed12a18d0e71cf6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_thread_callback_t), "_MINIDUMP_CALLBACK_INPUT.Thread", thread, 0x80, 0x0, true, 0xbf0586edb7000a0f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_thread_ex_callback_t), "_MINIDUMP_CALLBACK_INPUT.ThreadEx", thread_ex, 0x80, 0x80, true, 0x52ab9e4bc74a9e09)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_module_callback_t), "_MINIDUMP_CALLBACK_INPUT.Module", module, 0x80, 0x40, true, 0x86d559f0887fd3c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_include_thread_callback_t), "_MINIDUMP_CALLBACK_INPUT.IncludeThread", include_thread, 0x80, 0x20, true, 0xec6cb4db24c9f2f6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_include_module_callback_t), "_MINIDUMP_CALLBACK_INPUT.IncludeModule", include_module, 0x80, 0x40, true, 0xf362c43279ff3a20)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_io_callback_t), "_MINIDUMP_CALLBACK_INPUT.Io", io, 0x80, 0xe0, true, 0xadff1b94d347b3af)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(minidump_read_memory_failure_callback_t ), "_MINIDUMP_CALLBACK_INPUT.ReadMemoryFailure", read_memory_failure, 0x80, 0x80, true, 0x4806dd0cbf848608)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_INPUT.SecondaryFlags", secondary_flags, 0x80, 0x20, true, 0xc4f031657ce72dcb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_vm_query_callback_t), "_MINIDUMP_CALLBACK_INPUT.VmQuery", vm_query, 0x80, 0x40, true, 0x567a507650eb9901)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_vm_pre_read_callback_t), "_MINIDUMP_CALLBACK_INPUT.VmPreRead", vm_pre_read, 0x80, 0xa0, true, 0x7f7fb2061c6477a2)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_vm_post_read_callback_t), "_MINIDUMP_CALLBACK_INPUT.VmPostRead", vm_post_read, 0x80, 0xe0, true, 0x7731040319528750)
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
#define _m12
#define _m13
#define _m14
#endif