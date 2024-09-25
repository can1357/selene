#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LBR_TRACE_EVENT_DATA.TimeStamp", time_stamp, 0x0, 0x40, true, 0x2d1994c7088a93bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LBR_TRACE_EVENT_DATA.ProcessId", process_id, 0x40, 0x20, true, 0xa8b0b185cbca9b3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LBR_TRACE_EVENT_DATA.ThreadId", thread_id, 0x60, 0x20, true, 0xa331164642b09782)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LBR_TRACE_EVENT_DATA.Options", options, 0x80, 0x20, true, 0xb0fb392d7617d072)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::lbr_entry_t, 1>), "_LBR_TRACE_EVENT_DATA.Entries", entries, 0xc0, 0xc0, true, 0xca37bf69fddfbfbc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif