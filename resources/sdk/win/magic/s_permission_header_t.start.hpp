#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "SPermissionHeader.wVersion", w_version, 0x0, 0x10, true, 0x60092bc537105e60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "SPermissionHeader.wPad", w_pad, 0x10, 0x10, true, 0xcadb3938bf640d50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SPermissionHeader.gClass", g_class, 0x20, 0x80, true, 0xe74cd06cac2511be)
#else
#define _m00
#define _m01
#define _m02
#endif