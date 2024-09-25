#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROC_PERF_HISTORY_ENTRY.Utility", utility, 0x0, 0x10, true, 0xe89db857f2c87ceb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROC_PERF_HISTORY_ENTRY.AffinitizedUtility", affinitized_utility, 0x10, 0x10, true, 0x99e21ca4805d51d9)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PROC_PERF_HISTORY_ENTRY.Frequency", frequency, 0x20, 0x10, true, 0xbcf09269232aff00, 0, uint8_t,uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PROC_PERF_HISTORY_ENTRY.TaggedPercent", tagged_percent, 0x30, 0x18, true, 0x2881e383959bda15)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_HISTORY_ENTRY.ImportantPercent", important_percent, 0x0, 0x0, false, 0x993a5f13e8278ce3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_HISTORY_ENTRY.IdealPercent", ideal_percent, 0x0, 0x0, false, 0x6a53179c737d436a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif