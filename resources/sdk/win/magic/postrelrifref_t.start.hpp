#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t*), "POSTRELRIFREF.pOXIDEntry", p_oxid_entry, 0x100, 0x40, true, 0xd0a07f8b74308fef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rem_unknown_t*), "POSTRELRIFREF.pRemUnk", p_rem_unk, 0x140, 0x40, true, 0xc0d5e8752619a84e)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "POSTRELRIFREF.fReleaseRemUnkProxy", f_release_rem_unk_proxy, 0x180, 0x1, true, 0x210391687a490a5e, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "POSTRELRIFREF.fReleaseFromNA", f_release_from_na, 0x181, 0x1, true, 0x9503280a1f122141, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "POSTRELRIFREF.pAsyncRelease", p_async_release, 0x1c0, 0x40, true, 0x80eb9f879bb8a6bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "POSTRELRIFREF.cRifRef", c_rif_ref, 0x200, 0x10, true, 0xf64d1a8c1c96ec0a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::reminterfaceref_t), "POSTRELRIFREF.arRifRef", ar_rif_ref, 0x220, 0xc0, true, 0x257d800ddcd18e58)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif