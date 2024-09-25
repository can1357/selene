#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_PCI_AGP_CONTROL.Rsvd1", rsvd1, 0x0, 0x7, true, 0x10d65dff96be84be, 7, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_CONTROL.GTLB_Enable", gtlb_enable, 0x7, 0x1, true, 0xe129909f55609e27, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_CONTROL.AP_Enable", ap_enable, 0x8, 0x1, true, 0x3a1499bf1ff15ce1, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_CONTROL.CAL_Disable", cal_disable, 0x9, 0x1, true, 0x2361b2411dea30ae, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_PCI_AGP_CONTROL.Rsvd2", rsvd2, 0xa, 0x16, true, 0x1587d4c3b37823a3, 22, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif