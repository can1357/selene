#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "tagFastCopyLUIDAccess.Luid", luid, 0x0, 0x40, true, 0xcdf84d69a3942991)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagFastCopyLUIDAccess.FastAccess", fast_access, 0x0, 0x40, true, 0xacbb1a43c8e79b7a)
#else
#define _m00
#define _m01
#endif