#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.Paging", paging, 0x0, 0x1, true, 0xae3a6e1ef218b0cd, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.Present", present, 0x1, 0x1, true, 0xb2a2248db86632ab, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.RedirectedPresent", redirected_present, 0x2, 0x1, true, 0x18eed25ae13156cb, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.NullRendering", null_rendering, 0x3, 0x1, true, 0x8f89dc7b75cecbe0, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.Flip", flip, 0x4, 0x1, true, 0x79eb8c49084455de, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.FlipWithNoWait", flip_with_no_wait, 0x5, 0x1, true, 0x81417dd5756c3435, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.ContextSwitch", context_switch, 0x6, 0x1, true, 0xb285d22da868fdb8, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.Resubmission", resubmission, 0x7, 0x1, true, 0x5fd5b49481195270, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SUBMITCOMMANDFLAGS.VirtualMachineData", virtual_machine_data, 0x8, 0x1, true, 0x3c2928b54704173c, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SUBMITCOMMANDFLAGS.Value", value, 0x0, 0x20, true, 0xdd04c8a8f9c42e)
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
#endif