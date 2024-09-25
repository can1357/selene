#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_UPDATEHWCONTEXTSTATE_FLAGS.Suspended", suspended, 0x0, 0x1, true, 0xd5a3ddfc0ab9ec52, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_UPDATEHWCONTEXTSTATE_FLAGS.InterruptOnSwitchCompletion", interrupt_on_switch_completion, 0x1, 0x1, true, 0xe040b9478e1b63c7, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_UPDATEHWCONTEXTSTATE_FLAGS.Value", value, 0x0, 0x20, true, 0x6d710e5e222d8a79)
#else
#define _m00
#define _m01
#define _m02
#endif