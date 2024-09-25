#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KCORE_CONTROL_BLOCK.ProcessorCount", processor_count, 0x0, 0x0, false, 0x257761d1b46efe7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KCORE_CONTROL_BLOCK.ScanStartIndex", scan_start_index, 0x0, 0x0, false, 0x5d14043906ca4b0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kprcb_t*, 8>), "_KCORE_CONTROL_BLOCK.Prcbs", prcbs, 0x0, 0x0, false, 0xd546d53d6cc4b01f)
#else
#define _m00
#define _m01
#define _m02
#endif