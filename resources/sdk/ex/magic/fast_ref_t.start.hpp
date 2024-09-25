#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EX_FAST_REF.Object", object, 0x0, 0x40, true, 0xf3069429bdd9a13b)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_EX_FAST_REF.RefCnt", ref_cnt, 0x0, 0x4, true, 0x16fb984e29bdcdbf, 4, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EX_FAST_REF.Value", value, 0x0, 0x40, true, 0x17a4b888f04561e1)
#else
#define _m00
#define _m01
#define _m02
#endif