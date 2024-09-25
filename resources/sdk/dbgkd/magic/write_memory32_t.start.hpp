#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_MEMORY32.TargetBaseAddress", target_base_address, 0x0, 0x20, true, 0xb0ece90e1c9014fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_MEMORY32.TransferCount", transfer_count, 0x20, 0x20, true, 0x3207a03ebc52433a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_MEMORY32.ActualBytesWritten", actual_bytes_written, 0x40, 0x20, true, 0x85062e6cb986226f)
#else
#define _m00
#define _m01
#define _m02
#endif