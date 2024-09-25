#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DISK_INFO.Version", version, 0x0, 0x20, true, 0x4215109eca29366e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t), "_DUMP_DISK_INFO.Entry", entry, 0x40, 0x80, true, 0xe657f798f6532031)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DUMP_DISK_INFO.Id", id, 0xc0, 0x80, true, 0x48f006ca1a06e817)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DISK_INFO.Flags", flags, 0x140, 0x20, true, 0x4e7d9fac8d5cbaa4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DISK_INFO.ContextSize", context_size, 0x160, 0x20, true, 0x19b70967a312cc87)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_DISK_INFO.Context", context, 0x180, 0x40, true, 0x56a9aebc34214a22)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_adapter_info_t*), "_DUMP_DISK_INFO.AdapterInfo", adapter_info, 0x1c0, 0x40, true, 0x748630a7ee358b04)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_driver_info_t*), "_DUMP_DISK_INFO.DriverInfo", driver_info, 0x200, 0x40, true, 0x23040b62203184f)
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