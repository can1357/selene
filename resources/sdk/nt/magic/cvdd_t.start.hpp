#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CVDD.dwSig", dw_sig, 0x0, 0x20, true, 0x9b099403dee18729)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::nb10i_t), "_CVDD.nb10i", nb10i, 0x0, 0xa0, true, 0x6311f9d55496167)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::rsdsi_t), "_CVDD.rsdsi", rsdsi, 0x0, 0x20, true, 0x1257e65a361a881d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::nb10i_header_t), "_CVDD.nb10ih", nb10ih, 0x0, 0x80, true, 0x9b6427830483152e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::rsdsi_header_t), "_CVDD.rsdsih", rsdsih, 0x0, 0xc0, true, 0x33b4b1e81247dfc8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CVDD.Signature", signature, 0x0, 0x0, false, 0xac207d39faf21a4e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::nb10_t), "_CVDD.NB10", nb10, 0x0, 0x0, false, 0xf4f64ca6dbfd752e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::rsds_t), "_CVDD.RsDs", rs_ds, 0x0, 0x0, false, 0xedd4396f4a63f3b6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::l_ep_bi_header_t), "_CVDD.lepbih", lepbih, 0x0, 0x0, false, 0x349e2eb50a6bac26)
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