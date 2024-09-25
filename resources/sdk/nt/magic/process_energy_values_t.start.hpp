#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_PROCESS_ENERGY_VALUES.Cycles", cycles, 0x0, 0x0, true, 0xf7fb860f8a16e979)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.DiskEnergy", disk_energy, 0x200, 0x40, true, 0x830ab892901f3a58)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.NetworkTailEnergy", network_tail_energy, 0x240, 0x40, true, 0x417810d9b28bf26c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.MBBTailEnergy", mbb_tail_energy, 0x280, 0x40, true, 0xd85611ef3038e835)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.NetworkTxRxBytes", network_tx_rx_bytes, 0x2c0, 0x40, true, 0x3c4788c06eedcce7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.MBBTxRxBytes", mbb_tx_rx_bytes, 0x300, 0x40, true, 0xa07f8a916fdfa4f4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::energy_state_duration_t, 3>), "_PROCESS_ENERGY_VALUES.Durations", durations, 0x340, 0xc0, true, 0x85a8619fa708a7f0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES.ForegroundDuration", foreground_duration, 0x340, 0x40, true, 0x65e90eb7ae84798f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES.DesktopVisibleDuration", desktop_visible_duration, 0x380, 0x40, true, 0xfc759c9ac28d34a5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES.PSMForegroundDuration", psm_foreground_duration, 0x3c0, 0x40, true, 0x67b11b164d8990d1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_VALUES.CompositionRendered", composition_rendered, 0x400, 0x20, true, 0xe25d60084707f29)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_VALUES.CompositionDirtyGenerated", composition_dirty_generated, 0x420, 0x20, true, 0xbbfda70325a56c1d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_VALUES.CompositionDirtyPropagated", composition_dirty_propagated, 0x440, 0x20, true, 0x4119bdf843687198)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_PROCESS_ENERGY_VALUES.AttributedCycles", attributed_cycles, 0x480, 0x0, true, 0xbc6034d3601df721)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_PROCESS_ENERGY_VALUES.WorkOnBehalfCycles", work_on_behalf_cycles, 0x680, 0x0, true, 0x32a65a30931326f)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_ENERGY_VALUES.Foreground", foreground, 0x0, 0x0, false, 0x78e9052a10cddb81, 1, uint16_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_ENERGY_VALUES.DesktopVisible", desktop_visible, 0x0, 0x0, false, 0x8077a75b0e63edc6, 1, uint16_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_ENERGY_VALUES.WindowInformation", window_information, 0x0, 0x0, false, 0x8d4c63cd9025fd76)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_ENERGY_VALUES.CompositorRendered", compositor_rendered, 0x0, 0x0, false, 0x2afeacbb1c397b63)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_ENERGY_VALUES.DirtyGenerated", dirty_generated, 0x0, 0x0, false, 0x1dd00a302598b035)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_ENERGY_VALUES.DirtyPropagated", dirty_propagated, 0x0, 0x0, false, 0xef3cc9b04e3ce3e9)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PROCESS_ENERGY_VALUES.DesktopVisibilityReportTimestamp", desktop_visibility_report_timestamp, 0x0, 0x0, false, 0x81f1221ae9ec369)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.DesktopVisibleTime", desktop_visible_time, 0x0, 0x0, false, 0x530ef5895c07c62)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PROCESS_ENERGY_VALUES.ForegroundReportTimestamp", foreground_report_timestamp, 0x0, 0x0, false, 0xa77f992e4fd6d71)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_ENERGY_VALUES.ForegroundTime", foreground_time, 0x0, 0x0, false, 0x7eadc3fe386b759a)
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
#define _m21
#define _m22
#define _m23
#define _m24
#endif