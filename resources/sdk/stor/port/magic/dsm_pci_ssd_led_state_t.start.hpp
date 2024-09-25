#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.Ok", ok, 0x2, 0x1, true, 0x1877ed2d000b6986, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.Locate", locate, 0x3, 0x1, true, 0x46c56cdf8b10ef82, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.Fail", fail, 0x4, 0x1, true, 0x29bbd3bc209675c2, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.Rebuild", rebuild, 0x5, 0x1, true, 0xa7ed294e93488688, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.PFA", pfa, 0x6, 0x1, true, 0x689c7dacea060432, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.HotSpare", hot_spare, 0x7, 0x1, true, 0x61bbd98549b46c49, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.InACriticalArray", in_a_critical_array, 0x8, 0x1, true, 0x3a6cd486ee9c06bd, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.InAFailedArray", in_a_failed_array, 0x9, 0x1, true, 0x6476518f6c308466, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DSM_PCI_SSD_LED_STATE.State.InvalidDevice", invalid_device, 0xa, 0x1, true, 0x69c66faaa3127bff, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_state_t), "_DSM_PCI_SSD_LED_STATE.State", state, 0x0, 0x20, true, 0x45aa327b9b41841a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSM_PCI_SSD_LED_STATE.AsUlong", as_ulong, 0x0, 0x20, true, 0x4ef56337b2356d31)
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