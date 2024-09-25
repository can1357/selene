#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemFORMATETC.cfFormat", cf_format, 0x0, 0x20, true, 0x2a08b2eb4f2faee9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemFORMATETC.ptd", ptd, 0x20, 0x20, true, 0x684daa57d07baae6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemFORMATETC.dwAspect", dw_aspect, 0x40, 0x20, true, 0xb32b5ee142129114)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRemFORMATETC.lindex", lindex, 0x60, 0x20, true, 0xe87c2ee3b1f46e1d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemFORMATETC.tymed", tymed, 0x80, 0x20, true, 0x3828be5e6ad770e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif