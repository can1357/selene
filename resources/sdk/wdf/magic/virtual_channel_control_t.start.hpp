#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_CHANNEL_CONTROL.LoadVCArbitrationTable", load_vc_arbitration_table, 0x0, 0x1, true, 0x8edf6ea13607881e, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VIRTUAL_CHANNEL_CONTROL.VCArbitrationSelect", vc_arbitration_select, 0x1, 0x3, true, 0xc41162510c84e3a5, 3, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_VIRTUAL_CHANNEL_CONTROL.RsvdP", rsvd_p, 0x4, 0xc, true, 0x36f7f4d82a199ae6, 12, uint16_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIRTUAL_CHANNEL_CONTROL.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xf79c5d3ed9d248c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif