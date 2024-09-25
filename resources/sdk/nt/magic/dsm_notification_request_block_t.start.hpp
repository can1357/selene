#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSM_NOTIFICATION_REQUEST_BLOCK.Size", size, 0x0, 0x20, true, 0x6a647d0dbac9636b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSM_NOTIFICATION_REQUEST_BLOCK.Version", version, 0x20, 0x20, true, 0xf36128c7b637bd1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSM_NOTIFICATION_REQUEST_BLOCK.NotifyFlags", notify_flags, 0x40, 0x20, true, 0xfe4845f9587e9f24)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSM_NOTIFICATION_REQUEST_BLOCK.DataSetProfile", data_set_profile, 0x60, 0x20, true, 0xf68ab89462e56289)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSM_NOTIFICATION_REQUEST_BLOCK.DataSetRangesCount", data_set_ranges_count, 0xe0, 0x20, true, 0xbaa0a0dec892db6c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mp_device_data_set_range_t, 1>), "_DSM_NOTIFICATION_REQUEST_BLOCK.DataSetRanges", data_set_ranges, 0x100, 0x80, true, 0x5dfdc0eeba96c561)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif