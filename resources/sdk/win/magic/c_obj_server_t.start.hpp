#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CObjServer._pStdID", p_std_id, 0x40, 0x40, true, 0x250aa2be89aa0ac8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CObjServer._ipid", ipid, 0x80, 0x80, true, 0x9dae3fb46404d9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CObjServer._oxid", oxid, 0x100, 0x40, true, 0xd922b14818a4c34b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CObjServer._cRefs", c_refs, 0x140, 0x20, true, 0x585429343682b73e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif