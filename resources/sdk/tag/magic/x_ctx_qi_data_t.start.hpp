#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagXCtxQIData.pIID", p_iid, 0x0, 0x40, true, 0xf187c26d762a19fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_wrapper_t*), "tagXCtxQIData.pStdWrapper", p_std_wrapper, 0x40, 0x40, true, 0x8e50c62e08754cd4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_face_entry_t*), "tagXCtxQIData.pEntry", p_entry, 0x80, 0x40, true, 0xbefdaa7ca745c168)
#else
#define _m00
#define _m01
#define _m02
#endif