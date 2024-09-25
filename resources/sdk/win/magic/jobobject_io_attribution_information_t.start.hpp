#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_IO_ATTRIBUTION_INFORMATION.ControlFlags", control_flags, 0x0, 0x20, true, 0x2ae18b96e2a09d5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::jobobject_io_attribution_stats_t), "_JOBOBJECT_IO_ATTRIBUTION_INFORMATION.ReadStats", read_stats, 0x40, 0x0, true, 0x167dca00ba8e0856)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::jobobject_io_attribution_stats_t), "_JOBOBJECT_IO_ATTRIBUTION_INFORMATION.WriteStats", write_stats, 0x140, 0x0, true, 0x83ae242239d61544)
#else
#define _m00
#define _m01
#define _m02
#endif