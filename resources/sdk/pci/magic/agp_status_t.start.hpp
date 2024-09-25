#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_STATUS.Rate", rate, 0x0, 0x3, true, 0x97b7f49fc0e3ab83, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.Agp3Mode", agp3_mode, 0x3, 0x1, true, 0x7f14a042fd24dc37, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.FastWrite", fast_write, 0x4, 0x1, true, 0xc4df94f2ca65f2dc, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.FourGB", four_gb, 0x5, 0x1, true, 0xd2cb21a56a296838, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.HostTransDisable", host_trans_disable, 0x6, 0x1, true, 0x6ec965c528e5da70, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.Gart64", gart64, 0x7, 0x1, true, 0x15edddf212470a02, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.ITA_Coherent", ita_coherent, 0x8, 0x1, true, 0x72194f50c17d6262, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.SideBandAddressing", side_band_addressing, 0x9, 0x1, true, 0xd2b9ef38f0150aa, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_STATUS.CalibrationCycle", calibration_cycle, 0xa, 0x3, true, 0x34fb6fa0dda54eea, 3, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_STATUS.AsyncRequestSize", async_request_size, 0xd, 0x3, true, 0x93bcff413d47d4f0, 3, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.Rsvd1", rsvd1, 0x10, 0x1, true, 0xa1b1a99857b027e1, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_STATUS.Isoch", isoch, 0x11, 0x1, true, 0x4c656af658636f7, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_AGP_STATUS.Rsvd2", rsvd2, 0x12, 0x6, true, 0x230b77bf065fd83b, 6, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_AGP_STATUS.RequestQueueDepthMaximum", request_queue_depth_maximum, 0x18, 0x8, true, 0xb7cc553aa021a13, 8, uint32_t)
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
#endif