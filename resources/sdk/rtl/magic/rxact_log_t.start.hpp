#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RXACT_LOG.OperationCount", operation_count, 0x0, 0x20, true, 0x8b6cd9c16a44706b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RXACT_LOG.LogSize", log_size, 0x20, 0x20, true, 0xd1e6a667bef32775)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RXACT_LOG.LogSizeInUse", log_size_in_use, 0x40, 0x20, true, 0x631ce1c4110974d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RXACT_LOG.Alignment", alignment, 0x60, 0x20, true, 0x37725f96f555575e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif