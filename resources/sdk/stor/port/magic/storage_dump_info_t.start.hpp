#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DUMP_INFO.Version", version, 0x0, 0x20, true, 0xbe9109caef0f3b1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_dump_usage_t), "_STORAGE_DUMP_INFO.Usage", usage, 0x20, 0x20, true, 0xfebe12e8a1dd6cdf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_dump_action_t), "_STORAGE_DUMP_INFO.Action", action, 0x40, 0x20, true, 0xf0e6be62c9e046f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_disk_info_t*), "_STORAGE_DUMP_INFO.RootDisk", root_disk, 0x80, 0x40, true, 0xb96cfe2180fe849d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t), "_STORAGE_DUMP_INFO.DiskList", disk_list, 0xc0, 0x80, true, 0x26c03645d9457a8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t), "_STORAGE_DUMP_INFO.AdapterList", adapter_list, 0x140, 0x80, true, 0x72289596773946b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t), "_STORAGE_DUMP_INFO.DriverList", driver_list, 0x1c0, 0x80, true, 0x1ca104cd757a96b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif