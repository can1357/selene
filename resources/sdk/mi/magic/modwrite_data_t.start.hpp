#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MI_MODWRITE_DATA.PagesLoad", pages_load, 0x0, 0x40, true, 0x7fdf8f1b75e3caf8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_MODWRITE_DATA.PagesAverage", pages_average, 0x40, 0x40, true, 0xa294c13922d820d8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_MODWRITE_DATA.AverageAvailablePages", average_available_pages, 0x80, 0x40, true, 0xa562d2c7f6b6c530)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_MODWRITE_DATA.PagesWritten", pages_written, 0xc0, 0x40, true, 0xd89bcac9f47c6525)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_MODWRITE_DATA.WritesIssued", writes_issued, 0x100, 0x20, true, 0xfa0d9572ca5307c0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_MODWRITE_DATA.IgnoredReservationsCount", ignored_reservations_count, 0x120, 0x20, true, 0x890af9163a826afb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_MODWRITE_DATA.FreedReservationsCount", freed_reservations_count, 0x140, 0x20, true, 0xf2509805d6a7880)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_MODWRITE_DATA.WriteBurstCount", write_burst_count, 0x160, 0x20, true, 0xd90a49da72a78a23)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_MODWRITE_DATA.IgnoreReservationsStartTime", ignore_reservations_start_time, 0x180, 0x40, true, 0xfd7c251f3a2b5812)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union mi::reservation_cluster_info_t), "_MI_MODWRITE_DATA.ReservationClusterInfo", reservation_cluster_info, 0x1c0, 0x20, true, 0x39702a2c22877ca8)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_MODWRITE_DATA.IgnoreReservations", ignore_reservations, 0x1e0, 0x1, true, 0x12f7d73e582ddf2b, 1, uint16_t)
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
#endif