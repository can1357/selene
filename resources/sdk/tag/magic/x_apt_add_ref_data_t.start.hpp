#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagXAptAddRefData.cIfs", c_ifs, 0x0, 0x10, true, 0x815c99892420bc9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::reminterfaceref_t*), "tagXAptAddRefData.pIfRefs", p_if_refs, 0x40, 0x40, true, 0x7fa6c63e2d653bd7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult*), "tagXAptAddRefData.pResults", p_results, 0x80, 0x40, true, 0x9e55b34fbf6a7690)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_remote_unknown_t*), "tagXAptAddRefData.pRemUnk", p_rem_unk, 0xc0, 0x40, true, 0x63c34167db8abf23)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif