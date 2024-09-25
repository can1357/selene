#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "MarshalParams.iid", iid, 0x0, 0x80, true, 0x90f1a3cd2d31cb15)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MarshalParams.mshlflags", mshlflags, 0x80, 0x20, true, 0x72eae51a5d85e03e)
#else
#define _m00
#define _m01
#endif