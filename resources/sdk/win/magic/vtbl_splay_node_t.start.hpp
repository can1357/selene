#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "VtblSplayNode.SplayLinks", splay_links, 0x0, 0xc0, true, 0x2f62f6bc0da6bb89)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "VtblSplayNode.pvVtbl", pv_vtbl, 0xc0, 0x40, true, 0x22b06326b96b19b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "VtblSplayNode.cRefs", c_refs, 0x100, 0x20, true, 0xddbc63e1f786ec29)
#else
#define _m00
#define _m01
#define _m02
#endif