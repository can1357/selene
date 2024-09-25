#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RemInterfaceWeakRef.ipid", ipid, 0x0, 0x80, true, 0xb916d748e479b88b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RemInterfaceWeakRef.cPublicRefs", c_public_refs, 0x80, 0x20, true, 0x2646258ee8368c5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RemInterfaceWeakRef.cPrivateRefs", c_private_refs, 0xa0, 0x20, true, 0x165a30b4be112fc1)
#else
#define _m00
#define _m01
#define _m02
#endif