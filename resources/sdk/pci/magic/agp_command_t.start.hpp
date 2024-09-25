#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_COMMAND.Rate", rate, 0x0, 0x3, true, 0xca9f6e59c0129a80, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.Rsvd1", rsvd1, 0x3, 0x1, true, 0xdd2962bc643ad366, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.FastWriteEnable", fast_write_enable, 0x4, 0x1, true, 0x94a1bb1f5ccff600, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.FourGBEnable", four_gb_enable, 0x5, 0x1, true, 0xc464ee14a6898644, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.Rsvd2", rsvd2, 0x6, 0x1, true, 0xc56b3a7395c94f67, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.Gart64", gart64, 0x7, 0x1, true, 0x2287c4e7e4a1e470, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.AGPEnable", agp_enable, 0x8, 0x1, true, 0x7f8c2b6bd13b57d5, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_COMMAND.SBAEnable", sba_enable, 0x9, 0x1, true, 0x6c5da753cb7f292, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_COMMAND.CalibrationCycle", calibration_cycle, 0xa, 0x3, true, 0x10bcaace45ca73f9, 3, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_COMMAND.AsyncReqSize", async_req_size, 0xd, 0x3, true, 0x1f3fec904e995cd4, 3, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_AGP_COMMAND.Rsvd3", rsvd3, 0x10, 0x8, true, 0x85cec1126370f84, 8, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_AGP_COMMAND.RequestQueueDepth", request_queue_depth, 0x18, 0x8, true, 0xbc8efb0f56753e6d, 8, uint32_t)
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
#endif