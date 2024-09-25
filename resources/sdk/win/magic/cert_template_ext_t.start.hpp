#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_TEMPLATE_EXT.pszObjId", psz_obj_id, 0x0, 0x40, true, 0xd1ede7d48af9825f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TEMPLATE_EXT.dwMajorVersion", dw_major_version, 0x40, 0x20, true, 0x8660c8c4882347e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_TEMPLATE_EXT.fMinorVersion", f_minor_version, 0x60, 0x20, true, 0x684a33fb5c43ee46)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TEMPLATE_EXT.dwMinorVersion", dw_minor_version, 0x80, 0x20, true, 0x8d52a3ec2abf4fcd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif