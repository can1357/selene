#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "VerifierThreadState.cComInits", c_com_inits, 0x0, 0x20, true, 0xc4ef136f5587946c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "VerifierThreadState.cOleInits", c_ole_inits, 0x20, 0x20, true, 0x466bc288af742959)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "VerifierThreadState.guidContext", guid_context, 0x40, 0x80, true, 0x5cd2853994044845)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "VerifierThreadState.pvTopSWCNode", pv_top_swc_node, 0xc0, 0x40, true, 0xdca872a1ff8c60c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif