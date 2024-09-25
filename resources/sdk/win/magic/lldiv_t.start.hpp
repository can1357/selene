#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_lldiv_t.quot", quot, 0x0, 0x40, true, 0x74041d4f90be40f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_lldiv_t.rem", rem, 0x40, 0x40, true, 0x3dba8a07fe6ab047)
#else
#define _m00
#define _m01
#endif