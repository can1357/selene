#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPLICIT_ACCESS_W.grfAccessPermissions", grf_access_permissions, 0x0, 0x20, true, 0x9a4a738d228913d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::access_mode_t), "_EXPLICIT_ACCESS_W.grfAccessMode", grf_access_mode, 0x20, 0x20, true, 0xd15d5cc7b122eb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPLICIT_ACCESS_W.grfInheritance", grf_inheritance, 0x40, 0x20, true, 0xf1aaf1571f3c6762)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::trustee_w_t), "_EXPLICIT_ACCESS_W.Trustee", trustee, 0x80, 0x0, true, 0x14031e663a82ede2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif