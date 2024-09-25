#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::initialize_spy_node_t*), "tagInitializeSpyNode.pNext", p_next, 0x0, 0x40, true, 0xca8d7b2eea84145c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::initialize_spy_node_t*), "tagInitializeSpyNode.pPrev", p_prev, 0x40, 0x40, true, 0x823520c2c552e0c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInitializeSpyNode.dwRefs", dw_refs, 0x80, 0x20, true, 0x65729e05ed71e92c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInitializeSpyNode.dwCookie", dw_cookie, 0xa0, 0x20, true, 0xf87e638fdb4faee4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_initialize_spy_t*), "tagInitializeSpyNode.pInitSpy", p_init_spy, 0xc0, 0x40, true, 0x99c70f80c666b7bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif