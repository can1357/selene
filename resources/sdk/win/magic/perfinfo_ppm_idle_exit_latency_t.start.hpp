#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_EXIT_LATENCY.Flags", flags, 0x0, 0x20, true, 0x22f8f930af7985a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_EXIT_LATENCY.PlatformState", platform_state, 0x20, 0x20, true, 0x1a2a252e0bb5c634)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_EXIT_LATENCY.ProcessorState", processor_state, 0x40, 0x20, true, 0xf13d9cb59f72a9a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_EXIT_LATENCY.ReturnLatency", return_latency, 0x60, 0x20, true, 0xfb4a1107591b3019)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_EXIT_LATENCY.TotalLatency", total_latency, 0x80, 0x20, true, 0xdb9cb1bcc783eaa3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif