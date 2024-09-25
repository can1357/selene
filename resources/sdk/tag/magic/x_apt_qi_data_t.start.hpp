#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagXAptQIData.pIPID", p_ipid, 0x0, 0x40, true, 0x83b1b03f46ef1c51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagXAptQIData.cRefs", c_refs, 0x40, 0x20, true, 0x5898033a6366f815)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagXAptQIData.cIids", c_iids, 0x60, 0x10, true, 0xa63ab5219e484877)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagXAptQIData.iids", iids, 0x80, 0x40, true, 0x9748d762ac2b710e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::remqiresult_t**), "tagXAptQIData.ppQIResults", pp_qi_results, 0xc0, 0x40, true, 0xdd10669de510fd65)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_remote_unknown_t*), "tagXAptQIData.pRemUnk", p_rem_unk, 0x100, 0x40, true, 0x28446590d095e5b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif