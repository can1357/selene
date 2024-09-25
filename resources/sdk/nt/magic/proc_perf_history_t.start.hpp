#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.Count", count, 0x0, 0x20, true, 0x46f63d097b4a605b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.Slot", slot, 0x20, 0x20, true, 0xfd04b9796007e24d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.UtilityTotal", utility_total, 0x40, 0x20, true, 0x9fc3580e711587b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.AffinitizedUtilityTotal", affinitized_utility_total, 0x60, 0x20, true, 0xe8a441bb56f421a1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.FrequencyTotal", frequency_total, 0x80, 0x20, true, 0x30fe40f8958e9716)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PROC_PERF_HISTORY.TaggedPercentTotal", tagged_percent_total, 0xa0, 0x60, true, 0x720cacbb7a4ddd16)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::proc_perf_history_entry_t, 1>), "_PROC_PERF_HISTORY.HistoryList", history_list, 0x100, 0x50, true, 0xfc12d58b57f32b4e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.ImportantPercentTotal", important_percent_total, 0x0, 0x0, false, 0xa2c91179a57dcb37)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_HISTORY.IdealPercentTotal", ideal_percent_total, 0x0, 0x0, false, 0x52e4d467c842b1cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif