#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_CET_CONTEXT.Ssp", ssp, 0x0, 0x0, false, 0xd91ee20575d75084)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KERNEL_CET_CONTEXT.Rip", rip, 0x0, 0x0, false, 0xedf9dc2e96244355)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KERNEL_CET_CONTEXT.SegCs", seg_cs, 0x0, 0x0, false, 0xd870a57261f7d047)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KERNEL_CET_CONTEXT.AllFlags", all_flags, 0x0, 0x0, false, 0xe8112c32135860d3)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KERNEL_CET_CONTEXT.UseWrss", use_wrss, 0x0, 0x0, false, 0x7061889e3b892227, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KERNEL_CET_CONTEXT.PopShadowStackOne", pop_shadow_stack_one, 0x0, 0x0, false, 0x309bc3dd55319b41, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif