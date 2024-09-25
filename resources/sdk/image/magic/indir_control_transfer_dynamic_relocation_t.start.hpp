#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION.PageRelativeOffset", page_relative_offset, 0x0, 0xc, true, 0x355e6c4436d79ebc, 12, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION.IndirectCall", indirect_call, 0xc, 0x1, true, 0xb0375e727fc0961c, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION.RexWPrefix", rex_w_prefix, 0xd, 0x1, true, 0x8a0850ed9222e5d1, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION.CfgCheck", cfg_check, 0xe, 0x1, true, 0x7fbfc71c39609b4f, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif