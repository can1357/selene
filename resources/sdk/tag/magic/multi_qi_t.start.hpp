#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagMULTI_QI.pIID", p_iid, 0x0, 0x40, true, 0xcde09649de843db3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagMULTI_QI.pItf", p_itf, 0x40, 0x40, true, 0x980b6ac55500531e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "tagMULTI_QI.hr", hr, 0x80, 0x20, true, 0xf5ef5ede1f4182c)
#else
#define _m00
#define _m01
#define _m02
#endif