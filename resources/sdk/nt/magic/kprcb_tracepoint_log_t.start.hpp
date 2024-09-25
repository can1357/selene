#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kprcb_tracepoint_log_entry_t, 256>), "_KPRCB_TRACEPOINT_LOG.Entries", entries, 0x0, 0x0, false, 0x2f888f8d6c0d37ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB_TRACEPOINT_LOG.LogIndex", log_index, 0x0, 0x0, false, 0xb4019ce8eae12a43)
#else
#define _m00
#define _m01
#endif