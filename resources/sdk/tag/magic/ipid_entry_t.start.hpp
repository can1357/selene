#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "tagIPIDEntry.pNextIPID", p_next_ipid, 0x0, 0x40, true, 0x24931cca78160b8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDEntry.dwFlags", dw_flags, 0x40, 0x20, true, 0x260dcc53b0e626a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDEntry.cStrongRefs", c_strong_refs, 0x60, 0x20, true, 0xb9addddecf0a48af)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDEntry.cWeakRefs", c_weak_refs, 0x80, 0x20, true, 0xae68918374a0398f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIPIDEntry.cPrivateRefs", c_private_refs, 0xa0, 0x20, true, 0xa4903dc12990faeb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagIPIDEntry.pv", pv, 0xc0, 0x40, true, 0x7ec12a65099e6bed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagIPIDEntry.pStub", p_stub, 0x100, 0x40, true, 0xfe84dc71135571ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t*), "tagIPIDEntry.pOXIDEntry", p_oxid_entry, 0x140, 0x40, true, 0x42e13a1605fefe7b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagIPIDEntry.ipid", ipid, 0x180, 0x80, true, 0x6ff2d0eb1b14ca40)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagIPIDEntry.iid", iid, 0x200, 0x80, true, 0x8fbd30b4aca2b0fa)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_com_chnl_t*), "tagIPIDEntry.pChnl", p_chnl, 0x280, 0x40, true, 0xbb1d3325f880bf1d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::irc_entry_t*), "tagIPIDEntry.pIRCEntry", p_irc_entry, 0x2c0, 0x40, true, 0x75a91f0e230cc550)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t*), "tagIPIDEntry.pInterfaceName", p_interface_name, 0x300, 0x40, true, 0xb7bb42ae149e11d3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "tagIPIDEntry.pOIDFLink", p_oidf_link, 0x340, 0x40, true, 0xefd0ad92c5942805)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "tagIPIDEntry.pOIDBLink", p_oidb_link, 0x380, 0x40, true, 0xecb2a45288ea701b)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif