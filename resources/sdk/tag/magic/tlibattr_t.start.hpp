#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagTLIBATTR.guid", guid, 0x0, 0x80, true, 0xce40ff8270f6ea2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTLIBATTR.lcid", lcid, 0x80, 0x20, true, 0x8c706139467a787a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::syskind_t), "tagTLIBATTR.syskind", syskind, 0xa0, 0x20, true, 0xf7977a4552e132c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTLIBATTR.wMajorVerNum", w_major_ver_num, 0xc0, 0x10, true, 0xb3a4ffcd4ea611d9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTLIBATTR.wMinorVerNum", w_minor_ver_num, 0xd0, 0x10, true, 0x293123f8afd3cb14)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTLIBATTR.wLibFlags", w_lib_flags, 0xe0, 0x10, true, 0xf4c8cdeac8590d97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif