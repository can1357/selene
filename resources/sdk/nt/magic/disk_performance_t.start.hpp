#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE.BytesRead", bytes_read, 0x0, 0x40, true, 0xbffc9a7c54f19407)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE.BytesWritten", bytes_written, 0x40, 0x40, true, 0xcab64b47e19f4d1f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE.ReadTime", read_time, 0x80, 0x40, true, 0x1a5ca3465b175966)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE.WriteTime", write_time, 0xc0, 0x40, true, 0x235c6b2b5f0f34b8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE.IdleTime", idle_time, 0x100, 0x40, true, 0x13a963fe822fb0d7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE.ReadCount", read_count, 0x140, 0x20, true, 0x25e4718a60aa57ad)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE.WriteCount", write_count, 0x160, 0x20, true, 0xf9a5f6f3df3cc90d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE.QueueDepth", queue_depth, 0x180, 0x20, true, 0x55176b6d3aed8051)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE.SplitCount", split_count, 0x1a0, 0x20, true, 0x324e24f2b4ac250b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE.QueryTime", query_time, 0x1c0, 0x40, true, 0xd5b0f11b046e7c05)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE.StorageDeviceNumber", storage_device_number, 0x200, 0x20, true, 0x3eac53f39e20912a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 8>), "_DISK_PERFORMANCE.StorageManagerName", storage_manager_name, 0x220, 0x80, true, 0xe337427828e43f53)
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