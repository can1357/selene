#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagREMINTERFACEREF.ipid", ipid, 0x0, 0x80, true, 0xa3c01aabaebe49b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagREMINTERFACEREF.cPublicRefs", c_public_refs, 0x80, 0x20, true, 0xb30f20b2921fe229)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagREMINTERFACEREF.cPrivateRefs", c_private_refs, 0xa0, 0x20, true, 0x4662d5b8fcc953ea)
#else
#define _m00
#define _m01
#define _m02
#endif