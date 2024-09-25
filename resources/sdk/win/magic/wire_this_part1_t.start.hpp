#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "WireThisPart1.version", version, 0x0, 0x20, true, 0x2e4c3dd5efe5f6a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireThisPart1.flags", flags, 0x20, 0x20, true, 0x784832756f258da1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireThisPart1.cid", cid, 0x60, 0x80, true, 0x3087722546f34271)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireThisPart1.unique", unique, 0xe0, 0x20, true, 0x1871f70e75cfcf17)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif