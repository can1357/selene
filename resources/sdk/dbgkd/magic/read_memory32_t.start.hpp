#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_MEMORY32.TargetBaseAddress", target_base_address, 0x0, 0x20, true, 0x4a2b8cc7d9a71330)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_MEMORY32.TransferCount", transfer_count, 0x20, 0x20, true, 0x4fc8ade4dbb45682)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_MEMORY32.ActualBytesRead", actual_bytes_read, 0x40, 0x20, true, 0x2805db03a67f8c66)
#else
#define _m00
#define _m01
#define _m02
#endif