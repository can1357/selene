#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SAccessCache.fAccess", f_access, 0x0, 0x20, true, 0xa840e5bb9c7c0d96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "SAccessCache.lClient", l_client, 0x20, 0x40, true, 0xe9e490d9eedcdb08)
#else
#define _m00
#define _m01
#endif