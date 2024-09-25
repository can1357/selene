#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_INVPCID_DESCRIPTOR.IndividualAddress.Pcid", pcid, 0x0, 0xc, true, 0x4270afb4c8759d40, 12, uint64_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INVPCID_DESCRIPTOR.IndividualAddress.EntirePcid", entire_pcid, 0x0, 0x40, true, 0x3531193144aad12f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INVPCID_DESCRIPTOR.IndividualAddress.Virtual", _virtual, 0x40, 0x40, true, 0x54a809ab7c8395ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_individual_address_t), "_INVPCID_DESCRIPTOR.IndividualAddress", individual_address, 0x0, 0x80, true, 0x44a3b2a640e49ca5)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_INVPCID_DESCRIPTOR.SingleContext.Pcid", pcid, 0x0, 0xc, true, 0x3c92fdf0206a7c1c, 12, uint64_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INVPCID_DESCRIPTOR.SingleContext.EntirePcid", entire_pcid, 0x0, 0x40, true, 0xeeb470c0e8592a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_single_context_t), "_INVPCID_DESCRIPTOR.SingleContext", single_context, 0x0, 0x80, true, 0x57459216204cc65f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_all_context_and_globals_t), "_INVPCID_DESCRIPTOR.AllContextAndGlobals", all_context_and_globals, 0x0, 0x80, true, 0x673a81c598465810)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_all_context_and_globals_t), "_INVPCID_DESCRIPTOR.AllContext", all_context, 0x0, 0x80, true, 0xc379033a651b81d5)
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
#endif