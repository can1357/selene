#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagContextProperty.policyId", policy_id, 0x0, 0x80, true, 0xc6fbe109081eafca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagContextProperty.flags", flags, 0x80, 0x20, true, 0x8662f935461015b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagContextProperty.pUnk", p_unk, 0xc0, 0x40, true, 0xc77bd64e75168cc5)
#else
#define _m00
#define _m01
#define _m02
#endif