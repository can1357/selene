#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TCP_OFFLOAD_STATS.InSegments", in_segments, 0x0, 0x40, true, 0x6461efa6a36d3b4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TCP_OFFLOAD_STATS.OutSegments", out_segments, 0x40, 0x40, true, 0x5927a8041b0fd52c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATS.CurrentlyEstablished", currently_established, 0x80, 0x20, true, 0x45babd8c31ea5902)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATS.ResetEstablished", reset_established, 0xa0, 0x20, true, 0xa9271caeb6ed5853)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATS.RetransmittedSegments", retransmitted_segments, 0xc0, 0x20, true, 0x46fc87f850e1d232)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATS.InErrors", in_errors, 0xe0, 0x20, true, 0x29c06f4fbbd614f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATS.OutResets", out_resets, 0x100, 0x20, true, 0x69df79cff1256ba4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif