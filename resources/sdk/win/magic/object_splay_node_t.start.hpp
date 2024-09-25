#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "ObjectSplayNode.SplayLinks", splay_links, 0x0, 0xc0, true, 0xb4fd4bd186d8cc37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ObjectSplayNode.pvObject", pv_object, 0xc0, 0x40, true, 0x8d8eba60b301935b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ObjectSplayNode.pvVtblTracking", pv_vtbl_tracking, 0x100, 0x40, true, 0x1be674865a384762)
#else
#define _m00
#define _m01
#define _m02
#endif