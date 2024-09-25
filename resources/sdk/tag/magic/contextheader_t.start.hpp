#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ctxversion_t), "tagCONTEXTHEADER.Version", version, 0x0, 0x20, true, 0x2ba96dc5f163a55d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ctxcommonhdr_t), "tagCONTEXTHEADER.CmnHdr", cmn_hdr, 0x20, 0x20, true, 0xd808b1b380f55964)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::byvalhdr_t), "tagCONTEXTHEADER.ByValHdr", by_val_hdr, 0x140, 0x40, true, 0x25b23f21de094b3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::byrefhdr_t), "tagCONTEXTHEADER.ByRefHdr", by_ref_hdr, 0x140, 0x40, true, 0x588d68a385be2c3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif