#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDTmp.dwFlags", dw_flags, 0x0, 0x20, true, 0xa14a7309b906aecd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDTmp.cStrongRefs", c_strong_refs, 0x20, 0x20, true, 0xca211ffa6b0788c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDTmp.cWeakRefs", c_weak_refs, 0x40, 0x20, true, 0x7120a280a7cc9d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDTmp.cPrivateRefs", c_private_refs, 0x60, 0x20, true, 0xea477958d516424f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagIPIDTmp.pv", pv, 0x80, 0x40, true, 0x56690edd526dae17)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagIPIDTmp.pStub", p_stub, 0xc0, 0x40, true, 0x27fee887b5a9135c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t*), "tagIPIDTmp.pOXIDEntry", p_oxid_entry, 0x100, 0x40, true, 0xd4347bc80df5dc1f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif