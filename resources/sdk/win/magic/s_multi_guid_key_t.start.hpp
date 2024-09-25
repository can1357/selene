#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "SMultiGUIDKey.cGUID", c_guid, 0x0, 0x20, true, 0xd473e5ea76f39826)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "SMultiGUIDKey.aGUID", a_guid, 0x40, 0x40, true, 0x675be129319f007c)
#else
#define _m00
#define _m01
#endif