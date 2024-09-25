#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DISK_COUNTERS.BytesRead", bytes_read, 0x0, 0x40, true, 0xdf660138fbef65f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DISK_COUNTERS.BytesWritten", bytes_written, 0x40, 0x40, true, 0x7f93a327cb460d54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DISK_COUNTERS.ReadOperationCount", read_operation_count, 0x80, 0x40, true, 0x52428d676bd9a7f7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DISK_COUNTERS.WriteOperationCount", write_operation_count, 0xc0, 0x40, true, 0xcd88c961abf043ae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DISK_COUNTERS.FlushOperationCount", flush_operation_count, 0x100, 0x40, true, 0x1949b76be03e636c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif