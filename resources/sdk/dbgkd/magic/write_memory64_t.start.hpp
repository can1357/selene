#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_WRITE_MEMORY64.TargetBaseAddress", target_base_address, 0x0, 0x40, true, 0x9d2bd47722434c33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_MEMORY64.TransferCount", transfer_count, 0x40, 0x20, true, 0x161ad9616cf39863)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_MEMORY64.ActualBytesWritten", actual_bytes_written, 0x60, 0x20, true, 0x9df8fd46ad5c8bd9)
#else
#define _m00
#define _m01
#define _m02
#endif