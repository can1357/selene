#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_DISK_COUNTERS.FsBytesRead", fs_bytes_read, 0x0, 0x40, true, 0xd50354cbfa5bc9e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILESYSTEM_DISK_COUNTERS.FsBytesWritten", fs_bytes_written, 0x40, 0x40, true, 0xe317781aa92821b)
#else
#define _m00
#define _m01
#endif