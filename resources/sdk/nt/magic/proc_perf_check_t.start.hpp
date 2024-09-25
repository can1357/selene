#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK.LastActive", last_active, 0x0, 0x40, true, 0xac9ade0a303c0dc5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK.LastTime", last_time, 0x40, 0x40, true, 0x3d8e5669bde0b1b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK.LastStall", last_stall, 0x80, 0x40, true, 0x9373f1a096e3148c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PROC_PERF_CHECK.TaggedThreadPercent", tagged_thread_percent, 0xa40, 0x18, true, 0x609a96b7cd64051f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CHECK.Class0FloorPerfSelection", class0_floor_perf_selection, 0xa58, 0x8, true, 0x4fc012d8c1d0276f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CHECK.Class1MinimumPerfSelection", class1_minimum_perf_selection, 0xa60, 0x8, true, 0xae2154232b573f63)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK.LastResponsivenessEvents", last_responsiveness_events, 0xc0, 0x20, true, 0xe9dc242fda53f03f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_snap_t), "_PROC_PERF_CHECK.LastPerfCheckSnap", last_perf_check_snap, 0x100, 0x0, true, 0x5c59330031221b2a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_snap_t), "_PROC_PERF_CHECK.CurrentSnap", current_snap, 0x400, 0x0, true, 0x376d1655362e2605)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_snap_t), "_PROC_PERF_CHECK.LastDeliveredSnap", last_delivered_snap, 0x700, 0x0, true, 0xad8c227a692d3d78)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK.LastDeliveredPerformance", last_delivered_performance, 0xa00, 0x20, true, 0xbbb63ce029a4ea4e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK.LastDeliveredFrequency", last_delivered_frequency, 0xa20, 0x20, true, 0xb672dcb752fdb537)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK.CurrentResponsivenessEvents", current_responsiveness_events, 0xa80, 0x20, true, 0x304a4ec042f5f918)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_cycle_snap_t*), "_PROC_PERF_CHECK.LastPerfCheckCycleSnap", last_perf_check_cycle_snap, 0x0, 0x0, false, 0x296c5b389a95cc3d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_cycle_snap_t*), "_PROC_PERF_CHECK.CurrentCycleSnap", current_cycle_snap, 0x0, 0x0, false, 0xf3cfe826b3872454)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_cycle_snap_t*), "_PROC_PERF_CHECK.LastDeliveredCycleSnap", last_delivered_cycle_snap, 0x0, 0x0, false, 0xd0415014e24bf748)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CHECK.ImportantPercent", important_percent, 0x0, 0x0, false, 0x4fdc2b7a0f8e60ce)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_CHECK.IdealPercent", ideal_percent, 0x0, 0x0, false, 0xc39956ab2b15b7f9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 48>, 3>), "_PROC_PERF_CHECK.CyclesByFreqBand", cycles_by_freq_band, 0x0, 0x0, false, 0x61e38d32ec4a02f5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_snap_t), "_PROC_PERF_CHECK.Snap", snap, 0x0, 0x0, false, 0xbaf0aef4842bd9a8)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::proc_perf_check_snap_t), "_PROC_PERF_CHECK.TempSnap", temp_snap, 0x0, 0x0, false, 0x20145cdf1ed6fbd9)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif