#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITOR_SERIALIZATION.Size", size, 0x0, 0x20, true, 0xb495bd58ce1608f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITOR_SERIALIZATION.VideoPresentTargetId", video_present_target_id, 0x20, 0x20, true, 0xcd67034acf77542a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_orientation_t), "_DMM_MONITOR_SERIALIZATION.Orientation", orientation, 0x40, 0x20, true, 0xc4f9fbf27622d447)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_MONITOR_SERIALIZATION.IsSimulatedMonitor", is_simulated_monitor, 0x60, 0x8, true, 0xd3697a492b84ee8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_MONITOR_SERIALIZATION.IsUsingDefaultProfile", is_using_default_profile, 0x68, 0x8, true, 0x69fcf49ce8e5d114)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dmm::mode_pruning_algorithm_t), "_DMM_MONITOR_SERIALIZATION.ModePruningAlgorithm", mode_pruning_algorithm, 0x80, 0x20, true, 0x5bdff4b43b65b3af)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_DMM_MONITOR_SERIALIZATION.MonitorPowerState", monitor_power_state, 0xa0, 0x20, true, 0x691d13546bf6ea81)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITOR_SERIALIZATION.SourceModeSetOffset", source_mode_set_offset, 0xc0, 0x20, true, 0x5ecd4c32baf2e66)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITOR_SERIALIZATION.FrequencyRangeSetOffset", frequency_range_set_offset, 0xe0, 0x20, true, 0xcb56d34593394a4f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITOR_SERIALIZATION.DescriptorSetOffset", descriptor_set_offset, 0x100, 0x20, true, 0x9ae418f266e94807)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dmm::vidpn_monitor_type_t), "_DMM_MONITOR_SERIALIZATION.MonitorType", monitor_type, 0x120, 0x20, true, 0x230ab1d84509772b)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_MONITOR_SERIALIZATION.MonitorFlags.SyncLockIdentical", sync_lock_identical, 0x0, 0x0, false, 0x939f56e5faa68d4d, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_MONITOR_SERIALIZATION.MonitorFlags.HighColorSupport", high_color_support, 0x0, 0x0, false, 0x172e7c80476bb179, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_MONITOR_SERIALIZATION.MonitorFlags.WideColorSupport", wide_color_support, 0x0, 0x0, false, 0xa67e7d3b220309e6, 1, uint16_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_MONITOR_SERIALIZATION.MonitorFlags.DisplayPortAddressValid", display_port_address_valid, 0x0, 0x0, false, 0xc1ee507743a2d09a, 1, uint16_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMM_MONITOR_SERIALIZATION.MonitorFlags.IsUsb4Monitor", is_usb4_monitor, 0x0, 0x0, false, 0xf6eec462c639a076, 1, uint16_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_monitor_flags_t), "_DMM_MONITOR_SERIALIZATION.MonitorFlags", monitor_flags, 0x0, 0x0, false, 0xa6cff7b0669fb507)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_MONITOR_SERIALIZATION.DisplayPortAddressLinkCount", display_port_address_link_count, 0x0, 0x0, false, 0x485f04744649b679)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 15>), "_DMM_MONITOR_SERIALIZATION.DisplayPortAddress", display_port_address, 0x0, 0x0, false, 0xbc51cbc317cd5e2f)
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
#endif