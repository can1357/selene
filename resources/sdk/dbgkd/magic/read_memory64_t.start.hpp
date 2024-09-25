#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_READ_MEMORY64.TargetBaseAddress", target_base_address, 0x0, 0x40, true, 0x9ddf5bf30e33ec9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_MEMORY64.TransferCount", transfer_count, 0x40, 0x20, true, 0x75ec372192708478)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_MEMORY64.ActualBytesRead", actual_bytes_read, 0x60, 0x20, true, 0x4d95c812f58747e8)
#else
#define _m00
#define _m01
#define _m02
#endif