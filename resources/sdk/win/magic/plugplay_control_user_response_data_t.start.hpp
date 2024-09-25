#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_USER_RESPONSE_DATA.Response", response, 0x0, 0x20, true, 0x3d517ed1281964db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::veto_type_t), "_PLUGPLAY_CONTROL_USER_RESPONSE_DATA.VetoType", veto_type, 0x20, 0x20, true, 0xbc723f71f07c984)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_USER_RESPONSE_DATA.VetoName", veto_name, 0x40, 0x40, true, 0x5baa6c73c57c6ebf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_USER_RESPONSE_DATA.VetoNameLength", veto_name_length, 0x80, 0x20, true, 0x2b86deaf87e7fd33)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif