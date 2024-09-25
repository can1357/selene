#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dump_initialization_context_t), "_DUMP_STACK_CONTEXT.Init", init, 0x0, 0x40, true, 0x9943bcc813e24659)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DUMP_STACK_CONTEXT.PartitionOffset", partition_offset, 0x840, 0x40, true, 0x6cf589e84a29292d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_STACK_CONTEXT.DumpPointers", dump_pointers, 0x880, 0x40, true, 0xfcf364304abd1ff2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_STACK_CONTEXT.PointersLength", pointers_length, 0x8e0, 0x20, true, 0xb05b5150976ff3a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DUMP_STACK_CONTEXT.ModulePrefix", module_prefix, 0x900, 0x40, true, 0xccf3d326a02c6aa0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DUMP_STACK_CONTEXT.DriverList", driver_list, 0x940, 0x80, true, 0x95109c8495397767)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_DUMP_STACK_CONTEXT.InitMsg", init_msg, 0x9c0, 0x80, true, 0xdf9f48c4128ad215)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_DUMP_STACK_CONTEXT.ProgMsg", prog_msg, 0xa40, 0x80, true, 0x1f113be8a9c6cdde)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_DUMP_STACK_CONTEXT.DoneMsg", done_msg, 0xac0, 0x80, true, 0x68712ef287fd03b1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_STACK_CONTEXT.FileObject", file_object, 0xb40, 0x40, true, 0xaa07c02942e3ecf3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_usage_notification_type_t), "_DUMP_STACK_CONTEXT.UsageType", usage_type, 0xb80, 0x20, true, 0x7459f3b104891786)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_STACK_CONTEXT.StorageInfo", storage_info, 0x880, 0x40, true, 0xc0553fa071b372f5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_STACK_CONTEXT.UseStorageInfo", use_storage_info, 0x8c0, 0x8, true, 0x785df9dbdf305321)
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
#endif