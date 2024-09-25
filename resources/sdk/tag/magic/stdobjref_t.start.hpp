#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTDOBJREF.flags", flags, 0x0, 0x20, true, 0x6cff622cc4b16c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTDOBJREF.cPublicRefs", c_public_refs, 0x20, 0x20, true, 0x76bcac1d74e7fe43)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSTDOBJREF.oxid", oxid, 0x40, 0x40, true, 0x2c8c51560b79c357)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSTDOBJREF.oid", oid, 0x80, 0x40, true, 0xf5e2b3296091a46d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSTDOBJREF.ipid", ipid, 0xc0, 0x80, true, 0xa95f04f95d8b09c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif