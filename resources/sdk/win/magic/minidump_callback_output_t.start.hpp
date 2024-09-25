#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_OUTPUT.ModuleWriteFlags", module_write_flags, 0x0, 0x20, true, 0x9cfbe91bd1fa6afc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_OUTPUT.ThreadWriteFlags", thread_write_flags, 0x0, 0x20, true, 0x3f6d5a0b465a76b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_OUTPUT.SecondaryFlags", secondary_flags, 0x0, 0x20, true, 0xc2e25ad8fe870ceb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_CALLBACK_OUTPUT.MemoryBase", memory_base, 0x0, 0x40, true, 0xffd446123c12a8a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_OUTPUT.MemorySize", memory_size, 0x40, 0x20, true, 0xdaf1801088c29908)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MINIDUMP_CALLBACK_OUTPUT.CheckCancel", check_cancel, 0x0, 0x20, true, 0x6469049d5891d085)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MINIDUMP_CALLBACK_OUTPUT.Cancel", cancel, 0x20, 0x20, true, 0x747743a6b7a484ac)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_CALLBACK_OUTPUT.Handle", handle, 0x0, 0x40, true, 0x7b0df2bc05eda0cb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_memory_info_t), "_MINIDUMP_CALLBACK_OUTPUT.VmRegion", vm_region, 0x0, 0x80, true, 0x16ce4bd9e7ca73d1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MINIDUMP_CALLBACK_OUTPUT.Continue", _continue, 0x180, 0x20, true, 0x767c4401c5720dbb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_MINIDUMP_CALLBACK_OUTPUT.VmQueryStatus", vm_query_status, 0x0, 0x20, true, 0x21038887dbcb4d45)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::minidump_memory_info_t), "_MINIDUMP_CALLBACK_OUTPUT.VmQueryResult", vm_query_result, 0x20, 0x80, true, 0x42873347d8fd434e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_MINIDUMP_CALLBACK_OUTPUT.VmReadStatus", vm_read_status, 0x0, 0x20, true, 0x3853139d699faf6f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_CALLBACK_OUTPUT.VmReadBytesCompleted", vm_read_bytes_completed, 0x20, 0x20, true, 0x3eb84189f6194339)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_MINIDUMP_CALLBACK_OUTPUT.Status", status, 0x0, 0x20, true, 0x63532a6be2a6547c)
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